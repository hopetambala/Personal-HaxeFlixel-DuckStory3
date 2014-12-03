package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/experim1.csv", "assets/experim1.csv");
			type.set ("assets/experim1.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/experim2.csv", "assets/experim2.csv");
			type.set ("assets/experim2.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/experim3.csv", "assets/experim3.csv");
			type.set ("assets/experim3.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/sunset.jpg", "assets/images/sunset.jpg");
			type.set ("assets/images/sunset.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sunset.png", "assets/images/sunset.png");
			type.set ("assets/images/sunset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/wubbles.png", "assets/images/wubbles.png");
			type.set ("assets/images/wubbles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/wubbles2.png", "assets/images/wubbles2.png");
			type.set ("assets/images/wubbles2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/mapDoor1.csv", "assets/mapDoor1.csv");
			type.set ("assets/mapDoor1.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/mapDoor2.csv", "assets/mapDoor2.csv");
			type.set ("assets/mapDoor2.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/mapHits2.csv", "assets/mapHits2.csv");
			type.set ("assets/mapHits2.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/mapHits3.csv", "assets/mapHits3.csv");
			type.set ("assets/mapHits3.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/mapTiles.png", "assets/mapTiles.png");
			type.set ("assets/mapTiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/DUCKSONG.wav", "assets/music/DUCKSONG.wav");
			type.set ("assets/music/DUCKSONG.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/ducksong.wav", "assets/sounds/ducksong.wav");
			type.set ("assets/sounds/ducksong.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/tiles2.png", "assets/tiles2.png");
			type.set ("assets/tiles2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
