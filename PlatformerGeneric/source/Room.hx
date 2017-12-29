package; 

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import openfl.Assets;
import flash.geom.Point;
import org.flixel.*;

class Room
	{
		public var RoomNo:uint; // this will be used to see what room we're on
		public var WallMap:String; // this will be the string used to create our FlxTilemap
		public var DoorDef:Array; // this is the array of all the doors on this map
		public function Room(rNo:uint,wallMap:String,doorDef:String):Void
		{
			RoomNo = rNo;
			WallMap = wallMap;
			DoorDef = new Array();
			DoorDef = parseMap(doorDef);
		}	
		private function parseMap(mapDef:String):Array
		{
			// This function will take a string (one of our map.txt files) and build a 
			// multi-dimensional array out of it to be used later on 
			var tmpArr:Array = new Array();
			var widthInTiles:int = 0;
			var heightInTiles:int = 0;
			var c:uint;
			var r:uint;
			var cols:Array;
			var rows:Array = mapDef.split("\n");
			heightInTiles = rows.length;
			for (r = 0; r < heightInTiles; r++)
			{
				cols = rows[r].split(",");
				if(cols.length <= 1)
				{
					heightInTiles--;
					continue;
				}
				tmpArr.push(new Array());
				if(widthInTiles == 0)
					widthInTiles = cols.length;
				for(c = 0; c < widthInTiles; c++)
				{
					tmpArr[r].push(uint(cols[c]));
				}
			}
			return tmpArr;	
		}
	}
}