	package; 

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import flixel.FlxCamera;
import openfl.Assets;


/**
 * ...
 * @author Don Vato
 */
class PlayState extends FlxState
{
	/*
	var map1:String = openfl.Assets.getText("assests/mapHits2.csv");
	var map2:String = openfl.Assets.getText("assets/mapHits3.csv");
	var door1:String = openfl.Assets.getText("assets/mapDoor1.csv");
	var door2:String = openfl.Assets.getText("assets/MapDoor2.csv");
	*/
	public var level:FlxTilemap;
	var room1:FlxTilemap;
	public var player:Player;
	public var player2:Player2;
	//public var doorz:DoorTile;

	private var _currentRoom:String;
	private var _currentTile:String;
	private var _bg:FlxSprite;



	private function makeRoom(whichRoom:String, whichTile:String):FlxTilemap
	{	

		_currentRoom = whichRoom;
		//_currentTile = whichTile;

		//create our wall tilemap
		var tmpMap:FlxTilemap;
		tmpMap = new FlxTilemap();
		
		tmpMap.loadMap(Assets.getText(_currentRoom), whichTile, 16, 16, FlxTilemap.OFF);
	
		
		tmpMap.follow();
		return tmpMap;
		
	}

	override public function create():Void 
	{
		FlxG.mouse.visible = false;
		FlxG.cameras.bgColor = 0xffaaaaaa;
		_bg = new FlxSprite(0, 0, "assets/images/sunset.jpg");
		add(_bg);
		
		
		add(player = new Player(150,80));
		add(player2 = new Player2(3800,80));

		//room1 = makeRoom("assets/mapHits3.csv");
		room1 = makeRoom("assets/experim3.csv", "assets/tiles2.png");
		add(room1);
		
		//FlxG.camera.follow(player, FlxCamera.STYLE_PLATFORMER);
		//FlxG.camera.follow(player, FlxCamera.STYLE_SCREEN_BY_SCREEN,0);
		FlxG.camera.follow(player, FlxCamera.STYLE_NO_DEAD_ZONE);
	
		super.create();


	}

	override public function update():Void 
	{

		FlxG.collide(level, player);
		FlxG.collide(level, player2);

		
		if (player.inWorldBounds() == false)
		{
			FlxG.resetState();
		}
		

		super.update();
		
	}

}