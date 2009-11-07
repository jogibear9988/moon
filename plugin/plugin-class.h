/*
 * Automatically generated, do not edit this file directly
 */

/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * plugin-class.h: MoonLight browser plugin - autogenerated header classes
 *
 * Contact:
 *   Moonlight List (moonlight-list@lists.ximian.com)
 *
 * Copyright 2007-2009 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 *
 */

#ifndef __PLUGIN_CLASS_H__
#define __PLUGIN_CLASS_H__

#include "moonlight.h"
#include "error.h"
#include "plugin.h"

// debug javascript
#define DEBUG_JAVASCRIPT 1

#define DEPENDENCY_OBJECT_FROM_VARIANT(obj) (((MoonlightDependencyObjectObject*) NPVARIANT_TO_OBJECT (obj))->GetDependencyObject ())

#define THROW_JS_EXCEPTION(meth)	\
	do {	\
		char *message = g_strdup_printf ("Error calling method: %s", meth);	\
		NPN_SetException (this, message);	\
		g_free (message);	\
		return true; \
	} while (0);	\


enum PluginPropertyId {
	NoMapping = 0,

	// property names
	MoonId_ErrorCode = 0x4000,
	MoonId_ErrorType,
	MoonId_ErrorMessage,
	MoonId_LineNumber,
	MoonId_CharPosition,
	MoonId_XamlFile,
	MoonId_MethodName,
	MoonId_X,
	MoonId_Y,
	MoonId_Left,
	MoonId_Right,
	MoonId_Top,
	MoonId_Bottom,
	MoonId_TopLeft,
	MoonId_TopRight,
	MoonId_BottomLeft,
	MoonId_BottomRight,
	MoonId_Width,
	MoonId_Height,
	MoonId_Seconds,
	MoonId_Name,
	MoonId_Shift,
	MoonId_Ctrl,
	MoonId_Marker,
	MoonId_Key,
	MoonId_PlatformKeyCode,
	MoonId_Progress,
	MoonId_Settings,
	MoonId_Content,
	MoonId_InitParams,
	MoonId_Id,
	MoonId_IsLoaded,
	MoonId_Source,
	MoonId_Background,
	MoonId_EnableFramerateCounter,
	MoonId_EnableRedrawRegions,
	MoonId_EnableHtmlAccess,
	MoonId_MaxFrameRate,
	MoonId_Version,
	MoonId_Windowless,
	MoonId_ActualHeight,
	MoonId_ActualWidth,
	MoonId_FullScreen,
	MoonId_Root,
	MoonId_Count,
	MoonId_ResponseText,
	MoonId_DeviceType,
	MoonId_IsInverted,
	MoonId_Handled,
	MoonId_GridUnitType,
	MoonId_Value,
	MoonId_Accessibility,
	MoonId_MultiScaleImage_Source,

	// event names (handled by the property setters)
	MoonId_BufferingProgressChanged,
	MoonId_Completed,
	MoonId_CurrentStateChanged,
	MoonId_DownloadProgressChanged,
	MoonId_GotFocus,
	MoonId_ImageFailed,
	MoonId_KeyDown,
	MoonId_KeyUp,
	MoonId_LostFocus,
	MoonId_Loaded,
	MoonId_MarkerReached,
	MoonId_MediaEnded,
	MoonId_MediaFailed,
	MoonId_MediaOpened,
	MoonId_MouseEnter,
	MoonId_MouseLeave,
	MoonId_MouseMove,
	MoonId_MouseLeftButtonDown,
	MoonId_MouseLeftButtonUp,
	MoonId_OnResize,
	MoonId_OnFullScreenChange,
	MoonId_OnError,
	MoonId_OnLoad,
	MoonId_OnSourceDownloadProgressChanged,
	MoonId_OnSourceDownloadComplete,

	// method names
	MoonId_GetPosition = 0x8000,
	MoonId_CreateObject,
	MoonId_IsVersionSupported,
	MoonId_FindName,
	MoonId_CreateFromXaml,
	MoonId_CreateFromXamlDownloader,
	MoonId_Equals,
	MoonId_GetHost,
	MoonId_GetParent,
	MoonId_GetStylusInfo,
	MoonId_GetStylusPoints,
	MoonId_CaptureMouse,
	MoonId_ReleaseMouseCapture,
	MoonId_AddEventListener,
	MoonId_RemoveEventListener,
	MoonId_SetValue,
	MoonId_GetValue,
	MoonId_ToString,
#if DEBUG_JAVASCRIPT
	MoonId_Printf,
	MoonId_DumpNameScope,
#endif
	MoonId_Add,
	MoonId_Remove,
	MoonId_RemoveAt,
	MoonId_Insert,
	MoonId_Clear,
	MoonId_GetItem,
	MoonId_GetItemByName,
	MoonId_Begin,
	MoonId_Pause,
	MoonId_Resume,
	MoonId_Seek,
	MoonId_Stop,
	MoonId_Play,
	MoonId_SetSource,
	MoonId_SetFontSource,
	MoonId_Abort,
	MoonId_Open,
	MoonId_GetResponseText,
	MoonId_Send,
	MoonId_AddStylusPoints,
	MoonId_GetBounds,
	MoonId_HitTest,
	MoonId_UpdateLayout,

	MoonId_StopPropagation,
	MoonId_PreventDefault,
	MoonId_Detail,

	MoonId_Focus,

	MoonId_Select,
	MoonId_SelectAll,

	MoonId_MultiScaleImage_GetIthSubImage,
	MoonId_MultiScaleImage_GetSubImageCount,
	MoonId_MultiScaleImage_LogicalToElementX,
	MoonId_MultiScaleImage_LogicalToElementY,
	MoonId_MultiScaleImage_ZoomAboutLogicalPoint,
	MoonId_UIElement_CaptureMouse,
	MoonId_UIElement_TransformToVisual,
	MoonId_UIElement_ReleaseMouseCapture,
	MoonId_UIElement_UpdateLayout,

};


#define MAPPING_FLAG_SL1 0x01
#define MAPPING_FLAG_SL2 0x02

struct MoonNameIdMapping {
	const char *name;
	int id;
};

#define IS_METHOD(id)         (((id) & 0x8000) != 0)
#define IS_PROPERTY(id)       (((id) & 0x4000) != 0)


G_BEGIN_DECLS
G_GNUC_INTERNAL bool npobject_is_dependency_object (NPObject *obj);

G_GNUC_INTERNAL bool check_arg_list (const char *arglist, guint32 argc, const NPVariant *argv);

G_GNUC_INTERNAL void plugin_init_classes (void);
G_GNUC_INTERNAL void plugin_destroy_classes (void);

G_GNUC_INTERNAL void event_object_add_xaml_listener (EventObject *obj, PluginInstance *instance, const char *event_name, const char *cb_name);

void string_to_npvariant (const char *value, NPVariant *result);
G_GNUC_INTERNAL void variant_to_value (const NPVariant *v, Value **result);
G_END_DECLS


class MoonlightObject;

/*** EventListenerProxy */
typedef void (*EventArgsWrapper)(NPP instance, EventArgs *calldata, NPVariant *value);

class EventListenerProxy : public EventObject {
	static void on_handler_removed (gpointer closure);

	EventObject *target_object;
	MoonlightObject *owner;

	PluginInstance *plugin;
	bool is_func;

	/* if @is_func == true, callback is an NPObject (the function object)
	   if @is_func == false, callback is a char* (the function name)
	*/
	gpointer callback;

	char *event_name;
	int event_id;
	int token;

	bool one_shot;

 public:
	EventListenerProxy (PluginInstance *plugin, const char *event_name, const char *cb_name);
	EventListenerProxy (PluginInstance *plugin, const char *event_name, const NPVariant *cb);
	virtual ~EventListenerProxy ();

	void SetOwner (MoonlightObject *owner);

	int AddXamlHandler (EventObject *obj);
	int AddHandler (EventObject *obj);
	void RemoveHandler ();
	const char *GetCallbackAsString ();

	int GetEventId () { return event_id; }
	int GetEventToken () { return token; }

	void SetOneShot () { one_shot = true; }
	gpointer GetCallback () { return callback; }
	bool IsFunc () { return is_func; }
	
	PluginInstance *GetPlugin () { return plugin; }
	NPP GetInstance () { return plugin->GetInstance (); }

	static void proxy_listener_to_javascript (EventObject *sender, EventArgs *calldata, gpointer closure);
};


/*** MoonlightObjectClass **************************************************************/

struct MoonlightObjectType : NPClass {
	MoonlightObjectType ();

	~MoonlightObjectType() { g_free (mapping); }

	void AddMapping (const MoonNameIdMapping *mapping, int count);

	bool Enumerate (NPIdentifier **value, guint32 *count);

	int LookupName (NPIdentifier name);

	MoonNameIdMapping *mapping;
	int mapping_count;

	NPIdentifier last_lookup;
	int last_id;
};

extern MoonlightObjectType *MoonlightObjectClass;

struct MoonlightObject : NPObject {
	MoonlightObject (NPP instance)
	{
#if SANITY
		g_assert (instance->pdata != NULL); /* #if SANITY */
#endif
		this->plugin = (PluginInstance *) instance->pdata;
		if (this->plugin)
			this->plugin->ref ();
		this->moonlight_type = Type::INVALID;
		this->event_listener_proxies = g_hash_table_new (g_direct_hash, g_direct_equal);
	}

	virtual void Invalidate () { }
	virtual ~MoonlightObject ();

	virtual bool HasProperty (NPIdentifier name);
	virtual bool GetProperty (int id, NPIdentifier name, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier name, const NPVariant *value);

	virtual bool HasMethod (NPIdentifier unmapped);
	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
	int LookupName (NPIdentifier name) { return ((MoonlightObjectType *)_class)->LookupName (name); }

	void SetPlugin (PluginInstance *plugin)
	{
		if (this->plugin)
			this->plugin->unref ();
		this->plugin = plugin;
		this->plugin->ref ();
	}

	EventListenerProxy *LookupEventProxy (int event_id);
	void SetEventProxy (EventListenerProxy* proxy);
	void ClearEventProxy (EventListenerProxy *proxy);
	void ClearEventProxies ();
	NPP GetInstance () { return plugin->GetInstance (); }
	PluginInstance *GetPlugin () { return plugin; }

	static void destroy_proxy (gpointer data);
	static void invalidate_proxy (gpointer key, gpointer value, gpointer data);

	PluginInstance *plugin;
	Type::Kind moonlight_type;
	GHashTable *event_listener_proxies;
};


/*** MoonlightEventObjectClass ***************************************************/
struct MoonlightEventObjectType : MoonlightObjectType {
	MoonlightEventObjectType ();
};

extern MoonlightEventObjectType *MoonlightEventObjectClass;

struct MoonlightEventObjectObject : MoonlightObject {
	MoonlightEventObjectObject (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::EVENTOBJECT;
		eo = NULL;
	}

	virtual ~MoonlightEventObjectObject ();

	EventObject *eo;
};

extern MoonlightEventObjectObject *EventObjectCreateWrapper (PluginInstance *plugin, EventObject *obj);

/*** MoonlightDependencyObjectClass ***************************************************/
struct MoonlightDependencyObjectType : MoonlightEventObjectType {
	MoonlightDependencyObjectType ();
};


struct MoonlightDependencyObjectObject : MoonlightEventObjectObject {
	MoonlightDependencyObjectObject (NPP instance) : MoonlightEventObjectObject (instance)
	{
		moonlight_type = Type::DEPENDENCY_OBJECT;
	}

	DependencyObject *GetDependencyObject ()
	{
		if (eo == NULL || !eo->Is (Type::DEPENDENCY_OBJECT)) {
			g_warning ("MoonlightDependencyObjectObject::GetDependencyObject (): Not a dependency object!");
			return NULL;
		}

		return (DependencyObject*) eo;
	}

	virtual bool HasProperty (NPIdentifier unmapped);
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);

};

extern MoonlightDependencyObjectObject *DependencyObjectCreateWrapper (NPP instance, DependencyObject *obj);


/*************** AUTO GENERATED CLASSES ****************************/

/*** MoonlightUIElementClass *********/
struct MoonlightUIElementType : MoonlightDependencyObjectType {
	MoonlightUIElementType ();
};

extern MoonlightUIElementType *MoonlightUIElementClass;

struct MoonlightUIElementObject : MoonlightDependencyObjectObject {
	MoonlightUIElementObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::UIELEMENT;
	}

	virtual bool Invoke (int id, NPIdentifier name,
		const NPVariant *args, guint32 argCount, NPVariant *result);

};


/*************** END OF AUTO GENERATED CLASSES *********************/

/*** MoonlightPointClass  **************************************************************/
struct MoonlightPointType : MoonlightObjectType {
	MoonlightPointType ();
};

extern MoonlightPointType *MoonlightPointClass;

struct MoonlightPoint : MoonlightObject {
	MoonlightPoint (NPP instance) : MoonlightObject(instance), point (Point())
	{
		moonlight_type = Type::POINT;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	Point point;
};

/*** MoonlightRectClass  **************************************************************/
struct MoonlightRectType : MoonlightObjectType {
	MoonlightRectType ();
};

extern MoonlightRectType *MoonlightRectClass;

struct MoonlightRect : MoonlightObject {
	MoonlightRect (NPP instance) : MoonlightObject(instance), rect (Rect())
	{
		moonlight_type = Type::RECT;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	Rect rect;
};


/*** MoonlightDurationClass  **************************************************************/
struct MoonlightDurationType : MoonlightObjectType {
	MoonlightDurationType ();
};

extern MoonlightDurationType *MoonlightDurationClass;

struct MoonlightDuration : MoonlightObject {
	MoonlightDuration (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::DURATION;
		parent_property = NULL;
		parent_obj = NULL;
	}

	virtual ~MoonlightDuration ();

	void SetParentInfo (DependencyObject *parent_obj, DependencyProperty *parent_property);

	double GetValue ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	DependencyProperty *parent_property;
	DependencyObject *parent_obj;
};

/*** MoonlightTimeSpanClass  **************************************************************/
struct MoonlightTimeSpanType : MoonlightObjectType {
	MoonlightTimeSpanType ();
};

extern MoonlightTimeSpanType *MoonlightTimeSpanClass;

struct MoonlightTimeSpan : MoonlightObject {
	MoonlightTimeSpan (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::TIMESPAN;
		parent_property = NULL;
		parent_obj = NULL;
	}

	virtual ~MoonlightTimeSpan ();

	void SetParentInfo (DependencyObject *parent_obj, DependencyProperty *parent_property);

	TimeSpan GetValue ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	DependencyProperty *parent_property;
	DependencyObject *parent_obj;
};

/*** MoonlightKeyTimeClass  ****************************************************************/
struct MoonlightKeyTimeType : MoonlightObjectType {
	MoonlightKeyTimeType ();
};

extern MoonlightKeyTimeType *MoonlightKeyTimeClass;

struct MoonlightKeyTime : MoonlightObject {
	MoonlightKeyTime (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::KEYTIME;
		parent_property = NULL;
		parent_obj = NULL;
	}

	virtual ~MoonlightKeyTime ();

	void SetParentInfo (DependencyObject *parent_obj, DependencyProperty *parent_property);

	KeyTime* GetValue ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	DependencyProperty *parent_property;
	DependencyObject *parent_obj;
};

/*** MoonlightThicknessClass  ****************************************************************/
struct MoonlightThicknessType : MoonlightObjectType {
	MoonlightThicknessType ();
};

extern MoonlightThicknessType *MoonlightThicknessClass;

struct MoonlightThickness : MoonlightObject {
	MoonlightThickness (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::THICKNESS;
		parent_property = NULL;
		parent_obj = NULL;
	}

	virtual ~MoonlightThickness ();

	void SetParentInfo (DependencyObject *parent_obj, DependencyProperty *parent_property);

	Thickness* GetValue ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	DependencyProperty *parent_property;
	DependencyObject *parent_obj;
};

/*** MoonlightCornerRadiusClass  ****************************************************************/
struct MoonlightCornerRadiusType : MoonlightObjectType {
	MoonlightCornerRadiusType ();
};

extern MoonlightCornerRadiusType *MoonlightCornerRadiusClass;

struct MoonlightCornerRadius : MoonlightObject {
	MoonlightCornerRadius (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::CORNERRADIUS;
		parent_property = NULL;
		parent_obj = NULL;
	}

	virtual ~MoonlightCornerRadius ();

	void SetParentInfo (DependencyObject *parent_obj, DependencyProperty *parent_property);

	CornerRadius* GetValue ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	DependencyProperty *parent_property;
	DependencyObject *parent_obj;
};

/*** MoonlightGridLengthClass  ****************************************************************/
struct MoonlightGridLengthType : MoonlightObjectType {
	MoonlightGridLengthType ();
};

extern MoonlightGridLengthType *MoonlightGridLengthClass;

struct MoonlightGridLength : MoonlightObject {
	MoonlightGridLength (NPP instance) : MoonlightObject (instance)
	{
		moonlight_type = Type::GRIDLENGTH;
		parent_property = NULL;
		parent_obj = NULL;
	}

	virtual ~MoonlightGridLength ();

	void SetParentInfo (DependencyObject *parent_obj, DependencyProperty *parent_property);

	GridLength* GetValue ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	DependencyProperty *parent_property;
	DependencyObject *parent_obj;
};

/*** MoonlightSettingsClass ***********************************************************/

struct MoonlightSettingsType : MoonlightObjectType {
	MoonlightSettingsType ();
};

extern MoonlightSettingsType *MoonlightSettingsClass;

struct MoonlightSettingsObject : MoonlightObject {
	MoonlightSettingsObject (NPP instance) : MoonlightObject (instance)
	{
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};


/*** MoonlightContentClass ************************************************************/

struct MoonlightContentType : MoonlightObjectType {
	MoonlightContentType ();
};

extern MoonlightContentType *MoonlightContentClass;

struct MoonlightContentObject : MoonlightObject {
	MoonlightContentObject (NPP instance) : MoonlightObject (instance)
	{
		registered_scriptable_objects = g_hash_table_new (g_direct_hash, g_direct_equal);
		accessibility = NULL;
	}

	virtual ~MoonlightContentObject ();

	virtual bool HasProperty (NPIdentifier unmapped);
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);

	DependencyObject *accessibility;
	GHashTable *registered_scriptable_objects;
};

/*** MoonlightScriptControlClass **********************************************************/

struct MoonlightScriptControlType : MoonlightObjectType {
	MoonlightScriptControlType ();
};

extern MoonlightScriptControlType *MoonlightScriptControlClass;

struct MoonlightScriptControlObject : MoonlightObject {
	MoonlightScriptControlObject (NPP instance) : MoonlightObject (instance)
	{
		settings = (MoonlightSettingsObject *) NPN_CreateObject (instance, MoonlightSettingsClass);
		content = (MoonlightContentObject *) NPN_CreateObject (instance, MoonlightContentClass);
	}

	virtual ~MoonlightScriptControlObject ();

	virtual void Invalidate ();

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);

	MoonlightSettingsObject *settings;
	MoonlightContentObject *content;
	
	/* store the current event handlers so that they survive PluginInstance destruction */
	void PreSwitchPlugin (PluginInstance *old_plugin, PluginInstance *new_plugin);
	/* restore the stored event handlers into the new PluginInstance */
	void PostSwitchPlugin (PluginInstance *old_plugin, PluginInstance *new_plugin);

private:
	/* fields for storing the data in PreSwitchPlugin */
	int events_count;
	int *events_to_switch;
	MoonlightObject **events_object;
	gpointer *events_callbacks;
	bool *events_is_func;
};


/*** MoonlightEventArgsClass ******************************************************/
struct MoonlightEventArgsType : MoonlightDependencyObjectType {
	MoonlightEventArgsType ();
};

struct MoonlightEventArgs : MoonlightDependencyObjectObject {
	MoonlightEventArgs (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::EVENTARGS;
	}
};

/*** MoonlightEventArgsClass ******************************************************/
struct MoonlightRoutedEventArgsType : MoonlightEventArgsType {
	MoonlightRoutedEventArgsType ();
};

struct MoonlightRoutedEventArgs : MoonlightEventArgs {
	MoonlightRoutedEventArgs (NPP instance) : MoonlightEventArgs (instance)
	{
		moonlight_type = Type::ROUTEDEVENTARGS;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);

	RoutedEventArgs *GetRoutedEventArgs () { return (RoutedEventArgs *) eo; }
};

/*** MoonlightMouseEventArgsClass  **************************************************************/
struct MoonlightMouseEventArgsType : MoonlightRoutedEventArgsType {
	MoonlightMouseEventArgsType ();
};

struct MoonlightMouseEventArgsObject : MoonlightRoutedEventArgs {
	MoonlightMouseEventArgsObject (NPP instance) : MoonlightRoutedEventArgs (instance)
	{
		moonlight_type = Type::MOUSEEVENTARGS;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);
	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);

	MouseEventArgs *GetMouseEventArgs () { return (MouseEventArgs *) eo; };
};

/*** MoonlightMarkerReachedEventArgsClass ******************************************/
struct MoonlightMarkerReachedEventArgsType : MoonlightRoutedEventArgsType {
	MoonlightMarkerReachedEventArgsType ();
};

extern MoonlightMarkerReachedEventArgsType *MoonlightMarkerReachedEventArgsClass;

struct MoonlightMarkerReachedEventArgsObject : MoonlightRoutedEventArgs {
	MoonlightMarkerReachedEventArgsObject (NPP instance) : MoonlightRoutedEventArgs (instance)
	{
		moonlight_type = Type::MARKERREACHEDEVENTARGS;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);

	MarkerReachedEventArgs *GetMarkerReachedEventArgs () { return (MarkerReachedEventArgs *) eo; }
};

/*** MoonlightKeyEventArgsClass  **************************************************************/
struct MoonlightKeyEventArgsType : MoonlightEventArgsType {
	MoonlightKeyEventArgsType ();
};

struct MoonlightKeyEventArgsObject : MoonlightEventArgs {
	MoonlightKeyEventArgsObject (NPP instance) : MoonlightEventArgs (instance)
	{
		moonlight_type = Type::KEYEVENTARGS;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	KeyEventArgs *GetKeyEventArgs () { return (KeyEventArgs *) eo; }
};

/*** MoonlightDownloadProgressEventArgsClass ******************************************************/
struct MoonlightDownloadProgressEventArgsType : MoonlightEventArgsType {
	MoonlightDownloadProgressEventArgsType ();
};

struct MoonlightDownloadProgressEventArgs : MoonlightEventArgs {
	MoonlightDownloadProgressEventArgs (NPP instance) : MoonlightEventArgs (instance)
	{
		moonlight_type = Type::DOWNLOADPROGRESSEVENTARGS;
	}

	DownloadProgressEventArgs *GetDownloadProgressEventArgs () { return (DownloadProgressEventArgs *) eo; }
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
};

/*** MoonlightErrorEventArgsClass ******************************************************/
struct MoonlightErrorEventArgsType : MoonlightEventArgsType {
	MoonlightErrorEventArgsType ();
};

struct MoonlightErrorEventArgs : MoonlightEventArgs {
	MoonlightErrorEventArgs (NPP instance) : MoonlightEventArgs (instance)
	{
		moonlight_type = Type::ERROREVENTARGS;
	}

	ErrorEventArgs *GetErrorEventArgs () { return (ErrorEventArgs *) eo; }
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
};

/*** MoonlightCollectionClass ***************************************************/

struct MoonlightCollectionType : MoonlightDependencyObjectType {
	MoonlightCollectionType ();
};

struct MoonlightCollectionObject : MoonlightDependencyObjectObject {
	MoonlightCollectionObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::COLLECTION;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightStoryboardClass ***************************************************/

struct MoonlightStoryboardType : MoonlightDependencyObjectType {
	MoonlightStoryboardType ();
};

struct MoonlightStoryboardObject : MoonlightDependencyObjectObject {
	MoonlightStoryboardObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::STORYBOARD;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightMediaElement ***************************************************/

struct MoonlightMediaElementType : MoonlightUIElementType {
	MoonlightMediaElementType ();
};


struct MoonlightMediaElementObject : MoonlightUIElementObject {
	MoonlightMediaElementObject (NPP instance) : MoonlightUIElementObject (instance)
	{
		moonlight_type = Type::MEDIAELEMENT;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightMultiScaleImage ***************************************************/

struct MoonlightMultiScaleImageType : MoonlightDependencyObjectType {
	MoonlightMultiScaleImageType ();
};

struct MoonlightMultiScaleImageObject : MoonlightDependencyObjectObject {
	MoonlightMultiScaleImageObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::MULTISCALEIMAGE;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);

	virtual bool SetProperty (int id, NPIdentifier name, const NPVariant *value);
};

/*** MoonlightImage ***************************************************/

struct MoonlightImageType : MoonlightUIElementType {
	MoonlightImageType ();
};


struct MoonlightImageObject : MoonlightUIElementObject {
	MoonlightImageObject (NPP instance) : MoonlightUIElementObject (instance)
	{
		moonlight_type = Type::IMAGE;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
};

/*** MoonlightImageBrush ***************************************************/

struct MoonlightImageBrushType : MoonlightDependencyObjectType {
	MoonlightImageBrushType ();
};


struct MoonlightImageBrushObject : MoonlightDependencyObjectObject {
	MoonlightImageBrushObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::IMAGEBRUSH;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
};

/*** MoonlightDownloader ***************************************************/

struct MoonlightDownloaderType : MoonlightDependencyObjectType {
	MoonlightDownloaderType ();
};


struct MoonlightDownloaderObject : MoonlightDependencyObjectObject {
	MoonlightDownloaderObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::DOWNLOADER;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightTextBlock ***************************************************/

struct MoonlightTextBlockType : MoonlightUIElementType {
	MoonlightTextBlockType ();
};


struct MoonlightTextBlockObject : MoonlightUIElementObject {
	MoonlightTextBlockObject (NPP instance) : MoonlightUIElementObject (instance)
	{
		moonlight_type = Type::TEXTBLOCK;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightControl ***************************************************/

struct MoonlightControlType : MoonlightUIElementType {
	MoonlightControlType ();
};

extern MoonlightControlType *MoonlightControlClass;

struct MoonlightControlObject : MoonlightUIElementObject {
	MoonlightControlObject (NPP instance) : MoonlightUIElementObject (instance)
	{
		moonlight_type = Type::CONTROL;
	}

	virtual bool Invoke (int id, NPIdentifier name, const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightTextBox ***************************************************/

struct MoonlightTextBoxType : MoonlightControlType {
	MoonlightTextBoxType ();
};


struct MoonlightTextBoxObject : MoonlightControlObject {
	MoonlightTextBoxObject (NPP instance) : MoonlightControlObject (instance)
	{
		moonlight_type = Type::TEXTBOX;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};


/*** MoonlightPasswordBox ***************************************************/

struct MoonlightPasswordBoxType : MoonlightControlType {
	MoonlightPasswordBoxType ();
};


struct MoonlightPasswordBoxObject : MoonlightControlObject {
	MoonlightPasswordBoxObject (NPP instance) : MoonlightControlObject (instance)
	{
		moonlight_type = Type::PASSWORDBOX;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightStylusInfoType ***************************************************/

struct MoonlightStylusInfoType : MoonlightDependencyObjectType {
	MoonlightStylusInfoType ();
};


struct MoonlightStylusInfoObject : MoonlightDependencyObjectObject {
	MoonlightStylusInfoObject (NPP instance) : MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::STYLUSINFO;
	}

	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
};

/*** MoonlightStylusPointCollectionType *************************************/

struct MoonlightStylusPointCollectionType : MoonlightCollectionType {
	MoonlightStylusPointCollectionType ();
};


struct MoonlightStylusPointCollectionObject : MoonlightCollectionObject {
	MoonlightStylusPointCollectionObject (NPP instance) : MoonlightCollectionObject (instance)
	{
		moonlight_type = Type::STYLUSPOINT_COLLECTION;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};


/*** MoonlightStrokeCollectionType *************************************/

struct MoonlightStrokeCollectionType : MoonlightCollectionType {
	MoonlightStrokeCollectionType ();
};


struct MoonlightStrokeCollectionObject : MoonlightCollectionObject {

	MoonlightStrokeCollectionObject (NPP instance)
		: MoonlightCollectionObject (instance)
	{
		moonlight_type = Type::STROKE_COLLECTION;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};


/*** MoonlightStrokeType *************************************/

struct MoonlightStrokeType : MoonlightDependencyObjectType {
	MoonlightStrokeType ();
};


struct MoonlightStrokeObject : MoonlightDependencyObjectObject {

	MoonlightStrokeObject (NPP instance)
		: MoonlightDependencyObjectObject (instance)
	{
		moonlight_type = Type::STROKE;
	}

	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);
};

/*** MoonlightScriptableObject ***************************************************/

struct MoonlightScriptableObjectObject;

typedef void (*InvokeDelegate) (gpointer managed_obj_handle, gpointer method_handle, char* name, Value** args, int arg_count, Value* return_value);
typedef void (*SetPropertyDelegate) (gpointer managed_obj_handle, char* name, Value *value);
typedef void (*GetPropertyDelegate) (gpointer managed_obj_handle, char* name, Value *value);
typedef void (*EventHandlerDelegate) (gpointer managed_obj_handle, gpointer event_handle, MoonlightScriptableObjectObject* scriptable_obj, gpointer closure);

struct MoonlightScriptableObjectType : MoonlightObjectType {
	MoonlightScriptableObjectType ();
};

extern MoonlightScriptableObjectType *MoonlightScriptableObjectClass;

struct MoonlightScriptableObjectObject : MoonlightObject {
	MoonlightScriptableObjectObject (NPP instance) : MoonlightObject (instance)
	{
		managed_scriptable = NULL;
		properties = g_hash_table_new (g_direct_hash, g_direct_equal);
		methods = g_hash_table_new (g_direct_hash, g_direct_equal);
		events = g_hash_table_new (g_direct_hash, g_direct_equal);
	}

	virtual ~MoonlightScriptableObjectObject ();

	virtual bool HasProperty (NPIdentifier name);
	virtual bool GetProperty (int id, NPIdentifier unmapped, NPVariant *result);
	virtual bool SetProperty (int id, NPIdentifier unmapped, const NPVariant *value);

	virtual bool HasMethod (NPIdentifier name);
	virtual bool Invoke (int id, NPIdentifier name,
			     const NPVariant *args, guint32 argCount, NPVariant *result);

	gpointer managed_scriptable;
	GHashTable *properties;
	GHashTable *methods;
	GHashTable *events;

	InvokeDelegate invoke;
	SetPropertyDelegate setprop;
	GetPropertyDelegate getprop;
	EventHandlerDelegate addevent;
	EventHandlerDelegate removeevent;
};


G_BEGIN_DECLS

// These are meant to be called by System.Silverlight.dll
/* @GeneratePInvoke */
NPObject * moonlight_object_to_npobject (MoonlightObject *obj);
MoonlightObject * npobject_to_moonlight_object (NPObject *npobj);

/* @GeneratePInvoke */
MoonlightScriptableObjectObject *moonlight_scriptable_object_wrapper_create_root (PluginInstance *plugin, gpointer scriptable,
									     InvokeDelegate invoke,
									     SetPropertyDelegate setprop,
									     GetPropertyDelegate getprop,
									     EventHandlerDelegate addevent,
									     EventHandlerDelegate removeevent);

/* @GeneratePInvoke */
MoonlightScriptableObjectObject *moonlight_scriptable_object_wrapper_create (NPObject *parent, gpointer scriptable,
									     InvokeDelegate invoke,
									     SetPropertyDelegate setprop,
									     GetPropertyDelegate getprop,
									     EventHandlerDelegate addevent,
									     EventHandlerDelegate removeevent);

/* @GeneratePInvoke */
void moonlight_scriptable_object_add_property (PluginInstance *plugin,
					       MoonlightScriptableObjectObject *obj,
					       gpointer property_handle,
					       char *property_name,
					       /* @MarshalAs=TypeCode */ int property_type,
					       bool can_read,
					       bool can_write);

/* @GeneratePInvoke */
void moonlight_scriptable_object_add_event (PluginInstance *plugin,
					    MoonlightScriptableObjectObject *obj,
					    gpointer event_handle,
					    char *event_name);

/* @GeneratePInvoke */
void moonlight_scriptable_object_add_method (PluginInstance *plugin,
					     MoonlightScriptableObjectObject *obj,
					     gpointer method_handle,
					     char *method_name,
					     /* @MarshalAs=TypeCode */ int method_return_type,
					     /* @MarshalAs=TypeCode[] */ int *method_parameter_types,
					     int parameter_count);

/* @GeneratePInvoke */
void moonlight_scriptable_object_register (PluginInstance *plugin,
					   char *name,
					   MoonlightScriptableObjectObject *obj);

/* @GeneratePInvoke */
void moonlight_scriptable_object_emit_event (PluginInstance *plugin,
					     MoonlightScriptableObjectObject *obj,
					     MoonlightScriptableObjectObject *event_args,
					     NPObject *cb_obj);

/*** HtmlObject ***************************************************/

// int clientX, int clientY,

typedef void callback_dom_event (gpointer context, char *name, int client_x, int client_y, int offset_x, int offset_y, gboolean alt_key,
				 gboolean ctrl_key, gboolean shift_key, int mouse_button,
				 int key_code, int char_code,
				 gpointer domEvent);

const char *html_get_element_text (PluginInstance *plugin, const char *element_id);

// These are meant to be called by System.Silverlight.dll
/* @GeneratePInvoke */
bool html_object_has_property (PluginInstance *plugin, NPObject *npobj, char *name);
/* @GeneratePInvoke */
void html_object_get_property (PluginInstance *plugin, NPObject *npobj, char *name, /* @MarshalAs=Mono.Value,IsOut */ Value *result);
/* @GeneratePInvoke */
void html_object_set_property (PluginInstance *plugin, NPObject *npobj, char *name, Value *value);
/* @GeneratePInvoke */
bool html_object_invoke (PluginInstance *plugin, NPObject *npobj, char *name, /* @MarshalAs=Mono.Value[] */ Value *args, guint32 arg_count, /* @MarshalAs=Mono.Value,IsOut */ Value *result);
/* @GeneratePInvoke */
bool html_object_invoke_self (PluginInstance *plugin, NPObject *npobj, /* @MarshalAs=Mono.Value[] */ Value *args, guint32 arg_count, /* @MarshalAs=Mono.Value,IsOut */ Value *result);
/* @GeneratePInvoke */
gpointer html_object_attach_event (PluginInstance *plugin, NPObject *npobj, char *name, callback_dom_event *cb, gpointer context);
/* @GeneratePInvoke */
void html_object_detach_event (PluginInstance *plugin, const char *name, gpointer listener);
/* @GeneratePInvoke */
void html_object_release (PluginInstance *plugin, NPObject *npobj);
/* @GeneratePInvoke */
void html_object_retain (PluginInstance *plugin, NPObject *npobj);

/*** Browser interaction utility classes ***/
void browser_do_alert (PluginInstance *plugin, char *msg);


G_END_DECLS

#endif /* __PLUGIN_CLASS_H__ */
