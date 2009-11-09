/*
 * Automatically generated, do not edit this file directly
 */

/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * type.h: Generated code for the type system.
 *
 * Contact:
 *   Moonlight List (moonlight-list@lists.ximian.com)
 *
 * Copyright 2007 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 * 
 */
#ifndef __TYPE_H__
#define __TYPE_H__

#include <glib.h>
#include "list.h"

class Deployment;
class DependencyObject;
class DependencyProperty;
class Surface;
class Types;

/* @CBindingRequisite */
typedef gint64 TimeSpan;
typedef DependencyObject *create_inst_func (void);

class Type {
public:
	enum Kind {
		// START_MANAGED_MAPPING
		INVALID,
		ACCESSIBILITY,
		ALSASOURCE,
		ANIMATION,
		ANIMATIONCLOCK,
		APPLICATION,
		ARCSEGMENT,
		ASFDEMUXER,
		ASFMARKERDECODER,
		ASFPACKET,
		ASFPARSER,
		ASSEMBLYPART,
		ASSEMBLYPART_COLLECTION,
		ASXDEMUXER,
		AUDIOSOURCE,
		AUDIOSTREAM,
		BACKEASE,
		BEGINSTORYBOARD,
		BEZIERSEGMENT,
		BITMAPIMAGE,
		BITMAPSOURCE,
		BLUREFFECT,
		BOOL,
		BORDER,
		BOUNCEEASE,
		BRUSH,
		CANVAS,
		CHAR,
		CIRCLEEASE,
		CLOCK,
		CLOCKGROUP,
		CODECDOWNLOADER,
		COLLECTION,
		COLLECTIONCHANGEDEVENTARGS,
		COLLECTIONITEMCHANGEDEVENTARGS,
		COLOR,
		COLORANIMATION,
		COLORANIMATIONUSINGKEYFRAMES,
		COLORKEYFRAME,
		COLORKEYFRAME_COLLECTION,
		COLUMNDEFINITION,
		COLUMNDEFINITION_COLLECTION,
		CONTENTCHANGEDEVENTARGS,
		CONTENTCONTROL,
		CONTROL,
		CONTROLTEMPLATE,
		CORNERRADIUS,
		CUBICEASE,
		CURSOR,
		CURSORPOSITIONCHANGEDEVENTARGS,
		DATATEMPLATE,
		DEEPZOOMIMAGETILESOURCE,
		DEPENDENCY_OBJECT,
		DEPENDENCY_OBJECT_COLLECTION,
		DEPENDENCYPROPERTY,
		DEPLOYMENT,
		DISCRETECOLORKEYFRAME,
		DISCRETEDOUBLEKEYFRAME,
		DISCRETEOBJECTKEYFRAME,
		DISCRETEPOINTKEYFRAME,
		DISPATCHERTIMER,
		DOUBLE,
		DOUBLE_COLLECTION,
		DOUBLEANIMATION,
		DOUBLEANIMATIONUSINGKEYFRAMES,
		DOUBLEKEYFRAME,
		DOUBLEKEYFRAME_COLLECTION,
		DOWNLOADER,
		DOWNLOADPROGRESSEVENTARGS,
		DRAWINGATTRIBUTES,
		DROPSHADOWEFFECT,
		DURATION,
		EASINGCOLORKEYFRAME,
		EASINGDOUBLEKEYFRAME,
		EASINGFUNCTIONBASE,
		EASINGPOINTKEYFRAME,
		EFFECT,
		ELASTICEASE,
		ELLIPSE,
		ELLIPSEGEOMETRY,
		ERROREVENTARGS,
		EVENTARGS,
		EVENTLISTENERPROXY,
		EVENTOBJECT,
		EVENTTRIGGER,
		EXPONENTIALEASE,
		EXTENSIONPART,
		EXTERNALDECODER,
		EXTERNALDEMUXER,
		EXTERNALPART,
		EXTERNALPART_COLLECTION,
		FFMPEGDECODER,
		FFMPEGDEMUXER,
		FILEDOWNLOADER,
		FILESOURCE,
		FLOAT,
		FONTFAMILY,
		FONTSOURCE,
		FONTSTRETCH,
		FONTSTYLE,
		FONTWEIGHT,
		FRAMEWORKELEMENT,
		FRAMEWORKTEMPLATE,
		GENERALTRANSFORM,
		GEOMETRY,
		GEOMETRY_COLLECTION,
		GEOMETRYGROUP,
		GLYPHS,
		GRADIENTBRUSH,
		GRADIENTSTOP,
		GRADIENTSTOP_COLLECTION,
		GRID,
		GRIDLENGTH,
		HITTEST_COLLECTION,
		ICOMPARABLE,
		ICOMPARABLE_BOOL,
		ICOMPARABLE_CHAR,
		ICOMPARABLE_DOUBLE,
		ICOMPARABLE_FLOAT,
		ICOMPARABLE_INT,
		ICOMPARABLE_LONG,
		ICOMPARABLE_STRING,
		ICOMPARABLE_TIMESPAN,
		ICOMPARABLE_UINT,
		ICOMPARABLE_ULONG,
		ICONVERTIBLE,
		IEQUATABLE_BOOL,
		IEQUATABLE_CHAR,
		IEQUATABLE_DOUBLE,
		IEQUATABLE_FLOAT,
		IEQUATABLE_INT,
		IEQUATABLE_LONG,
		IEQUATABLE_STRING,
		IEQUATABLE_TIMESPAN,
		IEQUATABLE_UINT,
		IEQUATABLE_ULONG,
		IFORMATTABLE,
		IIMAGECONVERTER,
		IMAGE,
		IMAGEBRUSH,
		IMAGEERROREVENTARGS,
		IMAGESOURCE,
		IMEDIADECODER,
		IMEDIADEMUXER,
		IMEDIAOBJECT,
		IMEDIASOURCE,
		IMEDIASTREAM,
		INKPRESENTER,
		INLINE,
		INLINE_COLLECTION,
		INPUTMETHOD,
		INT32,
		INT64,
		INTERNALDOWNLOADER,
		ITEM_COLLECTION,
		KEYEVENTARGS,
		KEYFRAME,
		KEYFRAME_COLLECTION,
		KEYSPLINE,
		KEYTIME,
		LAYOUTINFORMATION,
		LINE,
		LINEARCOLORKEYFRAME,
		LINEARDOUBLEKEYFRAME,
		LINEARGRADIENTBRUSH,
		LINEARPOINTKEYFRAME,
		LINEBREAK,
		LINEGEOMETRY,
		LINESEGMENT,
		MANAGED,// Silverlight 2.0 only
		MANAGEDSTREAMSOURCE,
		MANAGEDTYPEINFO,
		MANUALTIMESOURCE,
		MARKERREACHEDEVENTARGS,
		MARKERSTREAM,
		MATRIX,
		MATRIXTRANSFORM,
		MEDIA,
		MEDIAATTRIBUTE,
		MEDIAATTRIBUTE_COLLECTION,
		MEDIABASE,
		MEDIACLOSURE,
		MEDIADISPOSEOBJECTCLOSURE,
		MEDIAELEMENT,
		MEDIAFRAME,
		MEDIAGETFRAMECLOSURE,
		MEDIAMARKER,
		MEDIAMARKERFOUNDCLOSURE,
		MEDIAPLAYER,
		MEDIAREPORTFRAMECOMPLETEDCLOSURE,
		MEDIAREPORTSEEKCOMPLETEDCLOSURE,
		MEDIASEEKCLOSURE,
		MEMORYSOURCE,
		MMSDEMUXER,
		MMSDOWNLOADER,
		MMSPLAYLISTENTRY,
		MMSSECONDDOWNLOADER,
		MMSSOURCE,
		MOUSEBUTTONEVENTARGS,
		MOUSEEVENTARGS,
		MOUSEWHEELEVENTARGS,
		MP3DEMUXER,
		MULTISCALEIMAGE,
		MULTISCALESUBIMAGE,
		MULTISCALESUBIMAGE_COLLECTION,
		MULTISCALETILESOURCE,
		NAMESCOPE,
		NPOBJ,
		NULLDECODER,
		OBJECT,
		OBJECTANIMATIONUSINGKEYFRAMES,
		OBJECTKEYFRAME,
		OBJECTKEYFRAME_COLLECTION,
		OUTOFBROWSERSETTINGS,
		PANEL,
		PARALLELTIMELINE,
		PARSERERROREVENTARGS,
		PASSTHROUGHDECODER,
		PASSWORDBOX,
		PATH,
		PATHFIGURE,
		PATHFIGURE_COLLECTION,
		PATHGEOMETRY,
		PATHSEGMENT,
		PATHSEGMENT_COLLECTION,
		PLAYLIST,
		PLAYLISTENTRY,
		PLAYLISTROOT,
		POINT,
		POINT_COLLECTION,
		POINTANIMATION,
		POINTANIMATIONUSINGKEYFRAMES,
		POINTKEYFRAME,
		POINTKEYFRAME_COLLECTION,
		POLYBEZIERSEGMENT,
		POLYGON,
		POLYLINE,
		POLYLINESEGMENT,
		POLYQUADRATICBEZIERSEGMENT,
		POPUP,
		POWEREASE,
		PROGRESSEVENTARGS,
		PROGRESSIVESOURCE,
		PROPERTYCHANGEDEVENTARGS,
		PROPERTYPATH,
		PULSESOURCE,
		QUADRATICBEZIERSEGMENT,
		QUADRATICEASE,
		QUARTICEASE,
		QUINTICEASE,
		RADIALGRADIENTBRUSH,
		RECT,
		RECTANGLE,
		RECTANGLEGEOMETRY,
		RENDERINGEVENTARGS,
		REPEATBEHAVIOR,
		RESOURCE_DICTIONARY,
		RESOURCE_DICTIONARY_COLLECTION,
		ROTATETRANSFORM,
		ROUTEDEVENTARGS,
		ROWDEFINITION,
		ROWDEFINITION_COLLECTION,
		RUN,
		SCALETRANSFORM,
		SETTER,
		SETTERBASE,
		SETTERBASE_COLLECTION,
		SHAPE,
		SINEEASE,
		SIZE,
		SIZECHANGEDEVENTARGS,
		SKEWTRANSFORM,
		SOLIDCOLORBRUSH,
		SPLINECOLORKEYFRAME,
		SPLINEDOUBLEKEYFRAME,
		SPLINEPOINTKEYFRAME,
		STORYBOARD,
		STRING,
		STROKE,
		STROKE_COLLECTION,
		STYLE,
		STYLUSINFO,
		STYLUSPOINT,
		STYLUSPOINT_COLLECTION,
		SURFACE,
		SYSTEMTIMESOURCE,
		TEXTBLOCK,
		TEXTBOX,
		TEXTBOXBASE,
		TEXTBOXMODELCHANGEDEVENTARGS,
		TEXTBOXVIEW,
		TEXTCHANGEDEVENTARGS,
		THICKNESS,
		TILEBRUSH,
		TIMELINE,
		TIMELINE_COLLECTION,
		TIMELINEGROUP,
		TIMELINEMARKER,
		TIMELINEMARKER_COLLECTION,
		TIMEMANAGER,
		TIMESOURCE,
		TIMESPAN,
		TRANSFORM,
		TRANSFORM_COLLECTION,
		TRANSFORMGROUP,
		TRANSLATETRANSFORM,
		TRIGGER_COLLECTION,
		TRIGGERACTION,
		TRIGGERACTION_COLLECTION,
		TRIGGERBASE,
		UIELEMENT,
		UIELEMENT_COLLECTION,
		UINT32,
		UINT64,
		UNMANAGEDMATRIX,
		URI,
		USERCONTROL,
		VIDEOBRUSH,
		VIDEOSTREAM,
		VISUALBRUSH,
		WRITEABLEBITMAP,
		XMLLANGUAGE,
		YUVCONVERTER,

		LASTTYPE,
		// END_MANAGED_MAPPING
	};
	
	static Type *Find (Deployment *deployment, const char *name);
	static Type *Find (const char *name);
	static Type *Find (Deployment *deployment, Type::Kind type);
	static Type *Find (Type::Kind type);
	static Type *Find (Deployment *deployment, const char *name, bool ignore_case);
	static Type *Find (const char *name, bool ignore_case);
	
	bool IsSubclassOf (Type::Kind super);
	bool IsSubclassOf (Deployment *deployment, Type::Kind super);
	static bool IsSubclassOf (Deployment *deployment, Type::Kind type, Type::Kind super);
	static bool IsSubclassOf (Type::Kind type, Type::Kind super);

	bool IsAssignableFrom (Type::Kind type);
	bool IsAssignableFrom (Deployment *deployment, Type::Kind type);
	static bool IsAssignableFrom (Deployment *deployment, Type::Kind assignable, Type::Kind type);
	static bool IsAssignableFrom (Type::Kind assignable, Type::Kind type);

	int LookupEvent (Deployment *deployment, const char *event_name);
	int LookupEvent (const char *event_name);
	const char *LookupEventName (int id);
	DependencyObject *CreateInstance ();
	const char *GetContentPropertyName ();
	
	DependencyProperty *LookupProperty (const char *name);
	void AddProperty (DependencyProperty *property);
	
	GHashTable *CopyProperties (bool inherited);
	
	Type::Kind GetKind () { return type; }
	void SetKind (Type::Kind value) { type = value; }
	Type::Kind GetParent () { return parent; }
	bool IsValueType () { return is_value_type; }
	bool IsInterface () { return is_interface; }
	bool IsCustomType () { return type > LASTTYPE; }
	const char *GetName () { return name; }
	int GetEventCount () { return total_event_count; }
	int GetInterfaceCount () { return interface_count; }
	Type::Kind GetInterface (int i) { return i >= 0 && i < interface_count ? interfaces[i] : Type::INVALID; }
	
	bool IsCtorVisible () { return ctor_visible; }

	~Type ();
	Type (Type::Kind type, Type::Kind parent, bool is_value_type, bool is_interface,
	      const char *name, 
	      int event_count, int total_event_count, const char **events,
	      int interface_count, const Type::Kind *interfaces, bool ctor_visible,
	      create_inst_func *create_inst, const char *content_property);
	
private:
	Type () {}
	
	Type::Kind type; // this type
	Type::Kind parent; // parent type, INVALID if no parent
	bool is_value_type; // if this type is a value type
	bool is_interface; // if this type is a value type

	const char *name; // The name as it appears in code.

	int interface_count;
	Type::Kind *interfaces;

	int event_count; // number of events in this class
	int total_event_count; // number of events in this class and all base classes
	const char **events; // the events this class has

	bool ctor_visible; // if the type is instantiable in xaml, basically if the managed type has a public default ctor.
	create_inst_func *create_inst; // a function pointer to create an instance of this type

	const char *content_property;
	
	// The catch here is that SL allows us to register several DPs with the same name,
	// and when looking up DP on name they seem to return the latest DP registered
	// with that name.
	GHashTable *properties; // Registered DependencyProperties for this type
};

class Types {
	friend class Type;
	
private:
	ArrayList types;
	ArrayList properties;
	
	void RegisterNativeTypes ();
	void RegisterNativeProperties ();
	
public:
	/* @GenerateCBinding,GeneratePInvoke,Version=2.0 */
	Types ();
	/* @GenerateCBinding,GeneratePInvoke,Version=2.0 */
	~Types ();

	/* @GenerateCBinding,Version=2.0 */	
	Type::Kind RegisterType (const char *name, void *gc_handle, Type::Kind parent, bool is_interface, bool ctor_visible, Type::Kind *interfaces, int interface_count);
	
	void AddProperty (DependencyProperty *property);
	DependencyProperty *GetProperty (int id);
	
	/* @GenerateCBinding,GeneratePInvoke,Version=2.0 */
	Type *Find (Type::Kind type);
	Type *Find (const char *name);
	Type *Find (const char *name, bool ignore_case);
	
	bool IsSubclassOf (Type::Kind type, Type::Kind super);
	bool IsSubclassOrSuperclassOf (Type::Kind unknown, Type::Kind known);
	static bool IsSubclassOrSuperclassOf (Types *types, Type::Kind unknown, Type::Kind known);
	
	bool IsAssignableFrom (Type::Kind destination, Type::Kind type);

	void Initialize ();
	void Dispose ();
	void DeleteProperties ();
};

G_BEGIN_DECLS

/* @GeneratePInvoke */
bool type_get_value_type (Type::Kind type);
DependencyObject *type_create_instance (Type *type);
DependencyObject *type_create_instance_from_kind (Type::Kind kind);

void types_init (void);
const char *type_get_name (Type::Kind type);
/* @GeneratePInvoke */
bool type_is_dependency_object (Type::Kind type);

/* @IncludeInKinds */
struct ManagedTypeInfo {
	char *assembly_name;
	char *full_name;
	
	ManagedTypeInfo (const char *assembly_name, const char *full_name)
	{
		this->assembly_name = g_strdup (assembly_name);
		this->full_name = g_strdup (full_name);
	}
};

G_END_DECLS

#endif

