#include <hxcpp.h>

#ifndef INCLUDED_Player2
#include <Player2.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player2_obj::__construct(int X,int Y)
{
HX_STACK_FRAME("Player2","new",0x40a86f03,"Player2.new","Player2.hx",23,0x8fc9a1cd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(25)
	super::__construct(X,Y,null());
	HX_STACK_LINE(26)
	::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)5),null(),null());
	HX_STACK_LINE(30)
	this->loadGraphic(HX_CSTRING("assets/images/wubbles2.png"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(31)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)5,true);
	HX_STACK_LINE(32)
	this->animation->play(HX_CSTRING("walk"),null(),null());
	HX_STACK_LINE(34)
	this->maxVelocity->set((int)80,(int)200);
	HX_STACK_LINE(35)
	this->acceleration->set_y((int)175);
	HX_STACK_LINE(36)
	this->drag->set_x((this->maxVelocity->x * (int)4));
	HX_STACK_LINE(37)
	this->set_flipX(true);
}
;
	return null();
}

//Player2_obj::~Player2_obj() { }

Dynamic Player2_obj::__CreateEmpty() { return  new Player2_obj; }
hx::ObjectPtr< Player2_obj > Player2_obj::__new(int X,int Y)
{  hx::ObjectPtr< Player2_obj > result = new Player2_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Player2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player2_obj > result = new Player2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player2_obj::update( ){
{
		HX_STACK_FRAME("Player2","update",0x0ea56f46,"Player2.update","Player2.hx",42,0x8fc9a1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(47)
		this->super::update();
	}
return null();
}



Player2_obj::Player2_obj()
{
}

Dynamic Player2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Player2_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player2_obj::__mClass,"__mClass");
};

#endif

Class Player2_obj::__mClass;

void Player2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player2"), hx::TCanCast< Player2_obj> ,sStaticFields,sMemberFields,
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

void Player2_obj::__boot()
{
}

