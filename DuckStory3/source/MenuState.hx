package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var _btnPlay:FlxButton;
	private var _bg2:FlxSprite;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	 private function clickPlay():Void
	{
    	FlxG.switchState(new PlayState());
	}


	override public function create():Void
	{

		var headline:FlxText = new FlxText(0, 100, FlxG.width, "Duck Story 3", 48);
		headline.alignment = "center";

		_bg2 = new FlxSprite(0, 0, "assets/images/sunset.png");
		//_bg.scrollFactor = new FlxPoint(.6, .6);
		add(_bg2);

		_btnPlay = new FlxButton(0, 0, "Play!", clickPlay);
		_btnPlay.screenCenter();

		add(headline);
		add(_btnPlay);
		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		_btnPlay = FlxDestroyUtil.destroy(_btnPlay);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}	
}