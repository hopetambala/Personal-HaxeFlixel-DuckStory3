#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player_obj::__construct(int X,int Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",22,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(24)
	super::__construct(X,Y,null());
	HX_STACK_LINE(25)
	::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)5),null(),null());
	HX_STACK_LINE(27)
	this->makeGraphic((int)8,(int)8,(int)-2354116,null(),null());
	HX_STACK_LINE(28)
	this->maxVelocity->set((int)80,(int)200);
	HX_STACK_LINE(29)
	this->acceleration->set_y((int)175);
	HX_STACK_LINE(30)
	this->drag->set_x((this->maxVelocity->x * (int)4));
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int X,int Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",36,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(38)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(39)
			this->acceleration->set_x((this->maxVelocity->x * (int)4));
		}
		HX_STACK_LINE(42)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)65,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(45)
			this->acceleration->set_x((-(this->maxVelocity->x) * (int)4));
			HX_STACK_LINE(47)
			if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->justPressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
				HX_STACK_LINE(49)
				this->maxVelocity->set_x((int)200);
			}
			HX_STACK_LINE(52)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->justReleased->checkStatus))){
				HX_STACK_LINE(54)
				this->maxVelocity->set_x((int)80);
			}
		}
		HX_STACK_LINE(58)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(61)
			this->acceleration->set_x((this->maxVelocity->x * (int)4));
			HX_STACK_LINE(63)
			if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->pressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
				HX_STACK_LINE(65)
				this->maxVelocity->set_x((int)200);
			}
			HX_STACK_LINE(68)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->justReleased->checkStatus))){
				HX_STACK_LINE(70)
				this->maxVelocity->set_x((int)80);
			}
		}
		HX_STACK_LINE(75)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->pressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
			HX_STACK_LINE(77)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(82)
		if (((  (((  (((((int(this->touching) & int((int)17))) > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
			HX_STACK_LINE(84)
			this->velocity->set_x((-(this->maxVelocity->x) * (int)8));
			HX_STACK_LINE(85)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(89)
		if (((  (((  (((((int(this->touching) & int((int)17))) > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)65,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
			HX_STACK_LINE(91)
			this->velocity->set_x((this->maxVelocity->x * (int)8));
			HX_STACK_LINE(92)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(97)
		this->_gamePad = ::flixel::FlxG_obj::gamepads->lastActive;
		HX_STACK_LINE(99)
		if (((this->_gamePad != null()))){
			HX_STACK_LINE(101)
			this->gamepadControls();
		}
		HX_STACK_LINE(104)
		this->super::update();
	}
return null();
}


Void Player_obj::gamepadControls( ){
{
		HX_STACK_FRAME("Player","gamepadControls",0xe666c14a,"Player.gamepadControls","Player.hx",108,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(110)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(111)
			this->acceleration->set_x((this->maxVelocity->x * (int)4));
		}
		HX_STACK_LINE(114)
		if ((this->_gamePad->pressed((int)7))){
			HX_STACK_LINE(117)
			this->acceleration->set_x((-(this->maxVelocity->x) * (int)4));
			HX_STACK_LINE(119)
			if (((  ((this->_gamePad->justPressed((int)9))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
				HX_STACK_LINE(121)
				this->maxVelocity->set_x((int)200);
			}
			HX_STACK_LINE(124)
			if ((this->_gamePad->justReleased((int)9))){
				HX_STACK_LINE(126)
				this->maxVelocity->set_x((int)80);
			}
		}
		HX_STACK_LINE(130)
		if ((this->_gamePad->pressed((int)5))){
			HX_STACK_LINE(133)
			this->acceleration->set_x((this->maxVelocity->x * (int)4));
			HX_STACK_LINE(135)
			if (((  ((this->_gamePad->pressed((int)9))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
				HX_STACK_LINE(137)
				this->maxVelocity->set_x((int)200);
			}
			HX_STACK_LINE(140)
			if ((this->_gamePad->justReleased((int)9))){
				HX_STACK_LINE(142)
				this->maxVelocity->set_x((int)80);
			}
		}
		HX_STACK_LINE(147)
		if (((  ((this->_gamePad->pressed((int)14))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
			HX_STACK_LINE(149)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(156)
			if (((  (((  (((((int(this->touching) & int((int)17))) > (int)0))) ? bool(this->_gamePad->justPressed((int)13)) : bool(false) ))) ? bool(this->_gamePad->pressed((int)5)) : bool(false) ))){
				HX_STACK_LINE(158)
				this->velocity->set_x((-(this->maxVelocity->x) * (int)8));
				HX_STACK_LINE(159)
				this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
			}
			HX_STACK_LINE(163)
			if (((  (((  (((((int(this->touching) & int((int)17))) > (int)0))) ? bool(this->_gamePad->justPressed((int)13)) : bool(false) ))) ? bool(this->_gamePad->pressed((int)7)) : bool(false) ))){
				HX_STACK_LINE(165)
				this->velocity->set_x((this->maxVelocity->x * (int)8));
				HX_STACK_LINE(166)
				this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,gamepadControls,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(_gamePad,"_gamePad");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gamePad,"_gamePad");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gamePad") ) { return _gamePad; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadControls") ) { return gamepadControls_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_gamePad") ) { _gamePad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_gamePad"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(Player_obj,_gamePad),HX_CSTRING("_gamePad")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_gamePad"),
	HX_CSTRING("update"),
	HX_CSTRING("gamepadControls"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

