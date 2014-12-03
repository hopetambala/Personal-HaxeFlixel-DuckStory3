#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_GraphicAuto
#include <flixel/tile/GraphicAuto.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",19,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(19)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::tile::FlxTilemap PlayState_obj::makeRoom( ::String whichRoom){
	HX_STACK_FRAME("PlayState","makeRoom",0xf1106a5a,"PlayState.makeRoom","PlayState.hx",37,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(whichRoom,"whichRoom")
	HX_STACK_LINE(39)
	this->_currentRoom = whichRoom;
	HX_STACK_LINE(43)
	::flixel::tile::FlxTilemap tmpMap;		HX_STACK_VAR(tmpMap,"tmpMap");
	HX_STACK_LINE(44)
	::flixel::tile::FlxTilemap _g = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	tmpMap = _g;
	HX_STACK_LINE(46)
	::String _g1 = ::openfl::Assets_obj::getText(this->_currentRoom);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	tmpMap->loadMap(_g1,hx::ClassOf< ::flixel::tile::GraphicAuto >(),(int)0,(int)0,(int)1,null(),null(),null());
	HX_STACK_LINE(49)
	tmpMap->follow(null(),null(),null());
	HX_STACK_LINE(50)
	return tmpMap;
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,makeRoom,return )

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",55,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::flixel::FlxG_obj::mouse->set_visible(false);
		HX_STACK_LINE(57)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-5592406);
		HX_STACK_LINE(61)
		::Player _g = ::Player_obj::__new((int)112,(int)92);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		::Player _g1 = this->player = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		this->add(_g1);
		HX_STACK_LINE(64)
		::flixel::tile::FlxTilemap _g2 = this->makeRoom(HX_CSTRING("assets/experim1.csv"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		this->room1 = _g2;
		HX_STACK_LINE(65)
		this->add(this->room1);
		HX_STACK_LINE(68)
		::flixel::FlxG_obj::camera->follow(this->player,(int)4,null(),(int)0);
		HX_STACK_LINE(71)
		this->super::create();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",77,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::flixel::FlxG_obj::overlap(this->level,this->player,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(82)
		bool _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::Player _this = this->player;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			Float _g = _this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			Float _g1 = (_this->x + _g);		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",82,0xb30d7781)
					{
						HX_STACK_LINE(82)
						::flixel::util::FlxRect _this1 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(82)
						return (_this1->x + _this1->width);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::flixel::FlxObject _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",82,0xb30d7781)
					{
						HX_STACK_LINE(82)
						Float _g2 = _this->get_height();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(82)
						Float _g3 = (_this->y + _g2);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(82)
						return (_g3 > ::flixel::FlxG_obj::worldBounds->y);
					}
					return null();
				}
			};
			HX_STACK_LINE(82)
			if (((  (((  (((_g1 > ::flixel::FlxG_obj::worldBounds->x))) ? bool((_this->x < _Function_2_1::Block())) : bool(false) ))) ? bool(_Function_2_2::Block(_this)) : bool(false) ))){
				struct _Function_3_1{
					inline static Float Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",82,0xb30d7781)
						{
							HX_STACK_LINE(82)
							::flixel::util::FlxRect _this1 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(82)
							return (_this1->y + _this1->height);
						}
						return null();
					}
				};
				HX_STACK_LINE(82)
				_g4 = (_this->y < _Function_3_1::Block());
			}
			else{
				HX_STACK_LINE(82)
				_g4 = false;
			}
		}
		HX_STACK_LINE(82)
		if (((_g4 == false))){
			HX_STACK_LINE(84)
			::Class _g5 = ::Type_obj::getClass(::flixel::FlxG_obj::game->_state);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(84)
			::flixel::FlxState State = ::Type_obj::createInstance(_g5,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(84)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
		HX_STACK_LINE(88)
		this->super::update();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(room1,"room1");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(_currentRoom,"_currentRoom");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(room1,"room1");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(_currentRoom,"_currentRoom");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"room1") ) { return room1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeRoom") ) { return makeRoom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentRoom") ) { return _currentRoom; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"room1") ) { room1=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentRoom") ) { _currentRoom=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("room1"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("_currentRoom"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,level),HX_CSTRING("level")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,room1),HX_CSTRING("room1")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsString,(int)offsetof(PlayState_obj,_currentRoom),HX_CSTRING("_currentRoom")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("level"),
	HX_CSTRING("room1"),
	HX_CSTRING("player"),
	HX_CSTRING("_currentRoom"),
	HX_CSTRING("makeRoom"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
}

