#ifndef __HEAD__ADVANCEDALL__
#define __HEAD__ADVANCEDALL__
#include <comdef.h>

#include <xstring>
using namespace std;
#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

struct __declspec(uuid("d1f4aed1-943c-4566-b698-2ff71cbd61bd")) DUITimerRuler;
struct __declspec(uuid("daede77e-ac84-449f-9205-ec971d2482cf")) DUITimePointer;
struct __declspec(uuid("5955009c-3d98-44fd-9bf3-6b1c57eac70e")) DUITimeLine;
struct __declspec(uuid("06550e01-f306-46e0-80e7-1a784e3538b4")) DUITimeChannel;
struct __declspec(uuid("a7e2e88c-5f12-4a8c-b819-cc4cdc14b8f9")) IDUITimerRuler;
enum PlayMode;

enum ChannelState;

struct __declspec(uuid("fce0acfa-d96c-4ca9-aa93-e83425ba7917")) IDUITimeLine;
struct __declspec(uuid("622646b3-b3f6-44b1-929f-6ac20a98bc6c")) IDUITimePointer;
struct __declspec(uuid("26bfd6b2-1654-43fb-9ac4-d7ea177988c1")) IDUITimeChannel;
struct __declspec(uuid("370f1d24-4ddd-4f49-80bc-77ebe70be992")) DataTime;
struct __declspec(uuid("ae334f24-7684-49cd-9610-57e8191417b7")) IDUITimeAxis;
struct __declspec(uuid("e44fc9e5-37c6-4797-977f-2c15de5e7867")) DUITimeAxis;
struct __declspec(uuid("b3b3efb2-7df4-4f36-a408-c6ccb17bed9d")) _IDUITimeAxisEvents;
enum DUI_AXISMSGID;

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUIAxisNotifyInfo;
enum TimeAxisMsgID;

struct __declspec(uuid("700a4353-9892-4de1-b816-a7d164f9d802")) DUISpaceItem;
struct __declspec(uuid("3f1abd8b-79cc-4e6b-8a28-0bb21ab765e1")) _IDUISpaceItemEvents;
struct __declspec(uuid("5b7567c2-0ba7-439e-af29-a39f4408b416")) DUIPropItem;
struct __declspec(uuid("d7259207-ce7b-4f70-baa5-573a2b4370fe")) _IDUIPropItemEvents;
enum DUIPROPGRID_PROPTYPE_ENUM;

struct __declspec(uuid("3f0016c8-d33b-4872-8539-2b8339c21fd8")) IDUIPropItem;
struct __declspec(uuid("5d9cc551-52c3-44a3-a986-7dfcd3491d1c")) IDUIPropGrid;
struct __declspec(uuid("ebfbe87e-5f3c-4c99-8c03-52c76a8f83b7")) DUIPropGrid;
struct __declspec(uuid("f6c3b6d0-2551-4377-93cc-7b7deb2f6b1f")) _IDUIPropGridEvents;
struct __declspec(uuid("1896803e-13cd-4c28-83aa-0b0069a646a8")) IDUILyricCtrl;
struct __declspec(uuid("be96345c-b746-4347-809c-94a4aee78b29")) DUILyricCtrl;
struct __declspec(uuid("e4c3529d-aea2-4373-aa0e-3be196c95b8b")) _IDUILyricCtrlEvents;
struct __declspec(uuid("2c51950c-86b5-469b-acb8-c532378c95a2")) IDUITaskBar;
struct __declspec(uuid("fff6ff53-82f5-4178-aa5f-2a46ffa4de85")) DUITaskBar;
struct __declspec(uuid("0255b99d-b765-409f-8551-48d27536e3a6")) _IDUITaskBarEvents;
struct __declspec(uuid("c5911d8e-ae30-455c-924a-c51e75d54c77")) DUIItemGroup;
struct __declspec(uuid("12e375df-5bcd-4372-92af-fe9ffe5d0d20")) _IDUIItemGroupEvents;
struct __declspec(uuid("231484e9-26d2-4888-b31b-8d8b063c4dea")) DUIScrollItem;
struct __declspec(uuid("213eae81-f74e-4b1f-8f00-a85dcacbe76d")) _IDUIScrollItemEvents;
struct __declspec(uuid("83b16de0-d4fd-43be-973d-465f8cdbd665")) IDUISpaceItem;
enum DUISCROLLITEM_STATE;

struct __declspec(uuid("7cb83b49-4601-4c76-a3f8-333bca07be0b")) IDUIScrollItem;
struct __declspec(uuid("2f348557-e1c7-44bd-a23b-9b2de83bbedf")) IDUIItemGroup;
struct __declspec(uuid("dd56cd5b-b096-410d-a3e4-ff2b879f1466")) IDUIScrollFairy;
struct __declspec(uuid("d9dde5e9-0959-4f63-b2d3-da7905c63b68")) DUIScrollFairy;
struct __declspec(uuid("771ade72-7aae-45b6-9499-2073af0d3b76")) _IDUIScrollFairyEvents;
enum ScrollFairyMsgID;

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUIScrollfairyNotifyInfo;
enum DUISCROLLFAIRY_NOTIFY;

enum DUISCROLLFAIRY_NOTIFY
{ 
	DUISF_NOTIFY = 3217 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUIScrollfairyNotifyInfo
{
	enum ScrollFairyMsgID 	eDUIMsgId;
	long 	lParam1;
	long 	lParam2;
	long 	lParam3;
	long 	lParam4;
	long 	lParam5;
};

enum ScrollFairyMsgID
{ 
	DUISCROLLITEM_CHANGE = 5,
	DUISCROLLITEM_CHANGING = 6,
	DUISCROLLITEM_CUSTOMCLICK = 14,
	DUISCROLLITEM_DBLBUTTONUP = 4,
	DUISCROLLITEM_DRAGGING = 11,
	DUISCROLLITEM_ENDDRAG = 12,
	DUISCROLLITEM_LBUTTONDOWN = 3,
	DUISCROLLITEM_LBUTTONUP = 2,
	DUISCROLLITEM_MOSEMOVE = 1,
	DUISCROLLITEM_MOUSELEAVE = 13,
	DUISCROLLITEM_RBUTTONDOWN = 15,
	DUISCROLLITEM_REMOVE = 7,
	DUISCROLLITEM_STARTDRAG = 10,
	DUISCROLLSPACEITEM_LBUTTONDOWN = 8,
	DUISCROLLSPACEITEM_LBUTTONUP = 9 
};

struct __declspec(uuid("771ade72-7aae-45b6-9499-2073af0d3b76")) _IDUIScrollFairyEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("dd56cd5b-b096-410d-a3e4-ff2b879f1466")) IDUIScrollFairy : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddGroup(long nID, BSTR strName, struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllGroup() = 0;
	virtual HRESULT __stdcall raw_GetGroupByName(BSTR strName, struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupByID(long nID, struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFocusGroupByID(long nID, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_SetFocusGroupByName(BSTR strName, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetFocusGroup(struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollReCalcRgn(VARIANT_BOOL bSetRgn  ) = 0;
	virtual HRESULT __stdcall raw_ScrollOver(VARIANT_BOOL bEnd  ) = 0;

	//
	//Method Wrapper
	//
	struct IDUIItemGroup * AddGroup(long  nID, tstring  strName  );
	BOOL  RemoveGroupByID(long  nID  );
	BOOL  RemoveGroupByName(tstring  strName  );
	void RemoveAllGroup();
	struct IDUIItemGroup * GetGroupByName(tstring  strName  );
	struct IDUIItemGroup * GetGroupByID(long  nID  );
	long  GetCount();
	void SetFocusGroupByID(long  nID, BOOL  bRedraw  );
	void SetFocusGroupByName(tstring  strName, BOOL  bRedraw  );
	struct IDUIItemGroup * GetFocusGroup();
	void SetScrollReCalcRgn(BOOL  bSetRgn  );
	void ScrollOver(BOOL  bEnd  );
};

struct __declspec(uuid("2f348557-e1c7-44bd-a23b-9b2de83bbedf")) IDUIItemGroup : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InsertItem(short nIndex, long nID, BSTR strName, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(long nID, BSTR strName, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItemWithImage(short nIndex, long nID, BSTR strName, BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItemWithImage(long nID, BSTR strName, BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUIScrollItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;
	virtual HRESULT __stdcall raw_GetItemByID(long nID, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByName(BSTR strName, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetText(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpaceItem(short nIndex, struct IDUISpaceItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectedItem(struct IDUIScrollItem *ppResult  ) = 0;
	virtual HRESULT __stdcall raw_SetScrollPos(long nPos  ) = 0;
	virtual HRESULT __stdcall raw_GetScrollPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTotalLength(long *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIScrollItem * InsertItem(short  nIndex, long  nID, tstring  strName  );
	struct IDUIScrollItem * AppendItem(long  nID, tstring  strName  );
	struct IDUIScrollItem * InsertItemWithImage(short  nIndex, long  nID, tstring  strName, tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	struct IDUIScrollItem * AppendItemWithImage(long  nID, tstring  strName, tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	BOOL  RemoveItemByID(long  nID  );
	BOOL  RemoveItemByName(tstring  strName  );
	BOOL  RemoveItem(struct IDUIScrollItem * pItem  );
	void RemoveAllItems();
	struct IDUIScrollItem * GetItemByID(long  nID  );
	struct IDUIScrollItem * GetItemByName(tstring  strName  );
	struct IDUIScrollItem * GetAt(short  nIndex  );
	long  GetCount();
	void SetText(tstring  strName  );
	tstring  GetText();
	void SetID(long  nID  );
	long  GetID();
	struct IDUISpaceItem * GetSpaceItem(short  nIndex  );
	void SetSelectedItem(struct IDUIScrollItem * ppResult  );
	void SetScrollPos(long  nPos  );
	long  GetScrollPos();
	long  GetTotalLength();
};

struct __declspec(uuid("7cb83b49-4601-4c76-a3f8-333bca07be0b")) IDUIScrollItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strName, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUISCROLLITEM_STATE eState, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUISCROLLITEM_STATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImage(BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_GetImagePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBitmap(OLE_HANDLE hBmp, enum DUISCROLLITEM_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(enum DUISCROLLITEM_STATE eState, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetInfoPanel(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetResObject(BSTR strName, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIndex(long *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strName, BOOL  bRefresh  );
	tstring  GetText();
	void SetID(long  nID  );
	long  GetID();
	void SetState(enum DUISCROLLITEM_STATE  eState, BOOL  bRefresh  );
	enum DUISCROLLITEM_STATE  GetState();
	void SetImage(tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	tstring  GetImagePath();
	void SetBitmap(OLE_HANDLE  hBmp, enum DUISCROLLITEM_STATE  eState  );
	OLE_HANDLE  GetBitmap(enum DUISCROLLITEM_STATE  eState  );
	struct IDUIControlBase * GetInfoPanel();
	struct IDUIControlBase * GetResObject(tstring  strName  );
	struct SkinRect  GetRect();
	long  GetIndex();
};

enum DUISCROLLITEM_STATE
{ 
	DUISCROLLITEM_STATE_DISABLED = 3,
	DUISCROLLITEM_STATE_HOT = 1,
	DUISCROLLITEM_STATE_LAST = 4,
	DUISCROLLITEM_STATE_NORMAL = 0,
	DUISCROLLITEM_STATE_PRESS = 2 
};

struct __declspec(uuid("83b16de0-d4fd-43be-973d-465f8cdbd665")) IDUISpaceItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetIndex(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImage(OLE_HANDLE hBitmap  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;

	//
	//Method Wrapper
	//
	long  GetIndex();
	void SetImage(OLE_HANDLE  hBitmap  );
	struct SkinRect  GetRect();
};

struct __declspec(uuid("213eae81-f74e-4b1f-8f00-a85dcacbe76d")) _IDUIScrollItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("12e375df-5bcd-4372-92af-fe9ffe5d0d20")) _IDUIItemGroupEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("0255b99d-b765-409f-8551-48d27536e3a6")) _IDUITaskBarEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("2c51950c-86b5-469b-acb8-c532378c95a2")) IDUITaskBar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Create(OLE_HANDLE hWndParent, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Destroy(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Show(VARIANT_BOOL bShow, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(BSTR bstrPicPath, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsExistedItem(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAll() = 0;
	virtual HRESULT __stdcall raw_GetSafeHandle(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	OLE_HANDLE  Create(OLE_HANDLE  hWndParent  );
	BOOL  Destroy();
	BOOL  Show(BOOL  bShow  );
	long  AppendItem(tstring  bstrPicPath  );
	short  GetCount();
	BOOL  IsExistedItem(long  nID  );
	BOOL  RemoveItem(long  nID  );
	void RemoveAll();
	OLE_HANDLE  GetSafeHandle();
};

struct __declspec(uuid("e4c3529d-aea2-4373-aa0e-3be196c95b8b")) _IDUILyricCtrlEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("1896803e-13cd-4c28-83aa-0b0069a646a8")) IDUILyricCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkText(unsigned short nIndex, unsigned short nPercent, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOkText(unsigned short *pnIndex, unsigned short *pnPercent, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextIndex(unsigned short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetOkTextIndex(unsigned short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextPercent(unsigned short nPercent  ) = 0;
	virtual HRESULT __stdcall raw_GetOkTextPercent(unsigned short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextColor(OLE_COLOR colorText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextColor(OLE_COLOR colorOkText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOkTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(struct IDUITextStyle *styleText  ) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextStyle(struct IDUITextStyle *styleOkText  ) = 0;
	virtual HRESULT __stdcall raw_GetOkTextStyle(struct IDUITextStyle **pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	BOOL  SetOkText(unsigned short  nIndex, unsigned short  nPercent  );
	BOOL  GetOkText(unsigned short * pnIndex, unsigned short * pnPercent  );
	void SetOkTextIndex(unsigned short  nIndex  );
	unsigned short  GetOkTextIndex();
	void SetOkTextPercent(unsigned short  nPercent  );
	unsigned short  GetOkTextPercent();
	BOOL  SetTextColor(OLE_COLOR  colorText  );
	OLE_COLOR  GetTextColor();
	BOOL  SetOkTextColor(OLE_COLOR  colorOkText  );
	OLE_COLOR  GetOkTextColor();
	void SetTextStyle(struct IDUITextStyle * styleText  );
	struct IDUITextStyle * GetTextStyle();
	void SetOkTextStyle(struct IDUITextStyle * styleOkText  );
	struct IDUITextStyle * GetOkTextStyle();
};

struct __declspec(uuid("f6c3b6d0-2551-4377-93cc-7b7deb2f6b1f")) _IDUIPropGridEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("5d9cc551-52c3-44a3-a986-7dfcd3491d1c")) IDUIPropGrid : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddPropItem(struct IDUIPropItem *pParentProp, enum DUIPROPGRID_PROPTYPE_ENUM ePropType, long nID, BSTR strName, VARIANT *value, BSTR strHelpTitle, BSTR strHelpContent, struct IDUIPropItem **pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIPropItem * AddPropItem(struct IDUIPropItem * pParentProp, enum DUIPROPGRID_PROPTYPE_ENUM  ePropType, long  nID, tstring  strName, VARIANT * value, tstring  strHelpTitle, tstring  strHelpContent  );
};

struct __declspec(uuid("3f0016c8-d33b-4872-8539-2b8339c21fd8")) IDUIPropItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

enum DUIPROPGRID_PROPTYPE_ENUM
{ 
	DUIPROPGRID_PROPTYPE_BOOL = 0,
	DUIPROPGRID_PROPTYPE_COMBO = 3,
	DUIPROPGRID_PROPTYPE_FILE = 2,
	DUIPROPGRID_PROPTYPE_GROUP = 5,
	DUIPROPGRID_PROPTYPE_NUM = 4,
	DUIPROPGRID_PROPTYPE_STRING = 1 
};

struct __declspec(uuid("d7259207-ce7b-4f70-baa5-573a2b4370fe")) _IDUIPropItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("3f1abd8b-79cc-4e6b-8a28-0bb21ab765e1")) _IDUISpaceItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

enum TimeAxisMsgID
{ 
	DUI_TIMEAXIS_BTNLBUTTONDOWN = 6031,
	DUI_TIMEAXIS_BTNLBUTTONUP = 6032,
	DUI_TIMEAXIS_LBUTTONDOWN = 6024,
	DUI_TIMEAXIS_LBUTTONUP = 6025,
	DUI_TIMEAXIS_MOUSEWHEEL = 6026,
	DUI_TIMEAXIS_POINTERDBCLICK = 6033,
	DUI_TIMEAXIS_POINTERDRAG = 6034,
	DUI_TIMEAXIS_POINTOUTRANG = 6035,
	DUI_TIMEAXIS_TAGLBUTTONDOWN = 6028,
	DUI_TIMEAXIS_TAGLBUTTONUP = 6029,
	DUI_TIMEAXIS_TAGLDBCLICK = 6030,
	DUI_TIMEAXIS_TAGMOUSEMOVE = 6027 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUIAxisNotifyInfo
{
	enum TimeAxisMsgID 	eDUIAxisMsgId;
	OLE_HANDLE 	lParam1;
	OLE_HANDLE 	lParam2;
	OLE_HANDLE 	lParam3;
	OLE_HANDLE 	lParam4;
	OLE_HANDLE 	lParam5;
};

enum DUI_AXISMSGID
{ 
	DUIAXIS_NOTIFY = 3473 
};

struct __declspec(uuid("b3b3efb2-7df4-4f36-a408-c6ccb17bed9d")) _IDUITimeAxisEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("ae334f24-7684-49cd-9610-57e8191417b7")) IDUITimeAxis : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetStartTime(struct DataTime tmData  ) = 0;
	virtual HRESULT __stdcall raw_SetEndTime(struct DataTime tmData  ) = 0;
	virtual HRESULT __stdcall raw_SetTimeTick(long nTimeTick  ) = 0;
	virtual HRESULT __stdcall raw_AppendTimeChannel(BSTR strText, struct IDUITimeChannel **pResult) = 0;
	virtual HRESULT __stdcall raw_SetPlayMode(enum PlayMode nMode  ) = 0;
	virtual HRESULT __stdcall raw_GetTimeRuler(struct IDUITimerRuler **pResult) = 0;
	virtual HRESULT __stdcall raw_SetRectlange(VARIANT_BOOL bRectlange  ) = 0;
	virtual HRESULT __stdcall raw_GetTimeChannel(long nIndex, struct IDUITimeChannel **pResult) = 0;
	virtual HRESULT __stdcall raw_GetChannelCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTickPix(long nTickPix  ) = 0;
	virtual HRESULT __stdcall raw_RemoveTimeChannel(long nIndex  ) = 0;
	virtual HRESULT __stdcall raw_SetMultiSelect(VARIANT_BOOL bMultiSelect  ) = 0;
	virtual HRESULT __stdcall raw_IsMultiSelect(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelChannel(struct IDUITimeChannel **pResult) = 0;
	virtual HRESULT __stdcall raw_SetPointerShow(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_SetRulerHeight(long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetRulerBackColor(struct IFillColor *pFillColor  ) = 0;
	virtual HRESULT __stdcall raw_SetRulerBackImage(struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_SetRulerOffsetX(long nOffsetX  ) = 0;
	virtual HRESULT __stdcall raw_SetChannelHeight(long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetSelPointerCenter() = 0;
	virtual HRESULT __stdcall raw_SetChannelColor(enum ChannelState nState, struct IFillColor *pFillColor  ) = 0;
	virtual HRESULT __stdcall raw_SetChannelImage(enum ChannelState nState, struct IDUIImageBase *pImageBase  ) = 0;

	//
	//Method Wrapper
	//
	void SetStartTime(struct DataTime  tmData  );
	void SetEndTime(struct DataTime  tmData  );
	void SetTimeTick(long  nTimeTick  );
	struct IDUITimeChannel * AppendTimeChannel(tstring  strText  );
	void SetPlayMode(enum PlayMode  nMode  );
	struct IDUITimerRuler * GetTimeRuler();
	void SetRectlange(BOOL  bRectlange  );
	struct IDUITimeChannel * GetTimeChannel(long  nIndex  );
	long  GetChannelCount();
	void SetTickPix(long  nTickPix  );
	void RemoveTimeChannel(long  nIndex  );
	void SetMultiSelect(BOOL  bMultiSelect  );
	BOOL  IsMultiSelect();
	struct IDUITimeChannel * GetSelChannel();
	void SetPointerShow(BOOL  bShow  );
	void SetBackColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	void SetRulerHeight(long  nHeight  );
	void SetRulerBackColor(struct IFillColor * pFillColor  );
	void SetRulerBackImage(struct IDUIImageBase * pImageBase  );
	void SetRulerOffsetX(long  nOffsetX  );
	void SetChannelHeight(long  nHeight  );
	void SetSelPointerCenter();
	void SetChannelColor(enum ChannelState  nState, struct IFillColor * pFillColor  );
	void SetChannelImage(enum ChannelState  nState, struct IDUIImageBase * pImageBase  );
};

struct __declspec(uuid("370f1d24-4ddd-4f49-80bc-77ebe70be992")) DataTime
{
	long 	nYear;
	long 	nMonth;
	long 	nDay;
	long 	nHour;
	long 	nMinute;
	long 	nSecond;
};

struct __declspec(uuid("26bfd6b2-1654-43fb-9ac4-d7ea177988c1")) IDUITimeChannel : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR bStrText  ) = 0;
	virtual HRESULT __stdcall raw_GetTimePointer(struct IDUITimePointer **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendTimeLine(struct DataTime tStart, struct DataTime tEnd, long nID, struct IFillColor *pFillColor, struct IDUIImageBase *pImageBase, struct IDUITimeLine **pResult) = 0;
	virtual HRESULT __stdcall raw_GetTimeLine(long nIndex, struct IDUITimeLine **pResult) = 0;
	virtual HRESULT __stdcall raw_GetTimeLineCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPointerPos(struct DataTime tTime  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllTimeLine() = 0;
	virtual HRESULT __stdcall raw_RemoveTimeLineById(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetState(enum ChannelState nState  ) = 0;
	virtual HRESULT __stdcall raw_IsCheck(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheck(VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_SetBtnText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetTimeLineById(long nID, struct IDUITimeLine **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendTimeTag(OLE_HANDLE hTagBitmap, OLE_HANDLE hCheckBitmap, struct IDUIImageBase *pImageBase, struct DataTime tStartTimeData, struct DataTime tEndTimeData, long nID  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllTagTimeTag() = 0;
	virtual HRESULT __stdcall raw_RemoveTimeTagById(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetTimeTagRectById(long nID, struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTimeTagStartTimeById(long nIndex, struct DataTime *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTimeTagEndTimeById(long nIndex, struct DataTime *pResult) = 0;
	virtual HRESULT __stdcall raw_IsTagCheck(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetColor(enum ChannelState nState, struct IFillColor *pFillColor  ) = 0;
	virtual HRESULT __stdcall raw_SetImageBase(enum ChannelState nState, struct IDUIImageBase *pImageBase  ) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  bStrText  );
	struct IDUITimePointer * GetTimePointer();
	struct IDUITimeLine * AppendTimeLine(struct DataTime  tStart, struct DataTime  tEnd, long  nID, struct IFillColor * pFillColor, struct IDUIImageBase * pImageBase  );
	struct IDUITimeLine * GetTimeLine(long  nIndex  );
	long  GetTimeLineCount();
	void SetPointerPos(struct DataTime  tTime  );
	void RemoveAllTimeLine();
	void RemoveTimeLineById(long  nID  );
	tstring  GetText();
	void SetState(enum ChannelState  nState  );
	BOOL  IsCheck();
	void SetCheck(BOOL  bCheck  );
	void SetBtnText(tstring  strText  );
	struct IDUITimeLine * GetTimeLineById(long  nID  );
	void AppendTimeTag(OLE_HANDLE  hTagBitmap, OLE_HANDLE  hCheckBitmap, struct IDUIImageBase * pImageBase, struct DataTime  tStartTimeData, struct DataTime  tEndTimeData, long  nID  );
	void RemoveAllTagTimeTag();
	void RemoveTimeTagById(long  nID  );
	struct SkinRect  GetTimeTagRectById(long  nID  );
	struct DataTime  GetTimeTagStartTimeById(long  nIndex  );
	struct DataTime  GetTimeTagEndTimeById(long  nIndex  );
	BOOL  IsTagCheck(long  nID  );
	void SetColor(enum ChannelState  nState, struct IFillColor * pFillColor  );
	void SetImageBase(enum ChannelState  nState, struct IDUIImageBase * pImageBase  );
};

struct __declspec(uuid("622646b3-b3f6-44b1-929f-6ac20a98bc6c")) IDUITimePointer : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetStartTime(struct DataTime tmData  ) = 0;

	//
	//Method Wrapper
	//
	void SetStartTime(struct DataTime  tmData  );
};

struct __declspec(uuid("fce0acfa-d96c-4ca9-aa93-e83425ba7917")) IDUITimeLine : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetSelectionStartTime(long nIndex, struct DataTime *pResult) = 0;
	virtual HRESULT __stdcall raw_Deselect() = 0;
	virtual HRESULT __stdcall raw_GetStartTime(struct DataTime *pResult) = 0;
	virtual HRESULT __stdcall raw_GetEndTime(struct DataTime *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectionEndTime(long nIndex, struct DataTime *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectionCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectionTime(struct DataTime tmStartData, struct DataTime tmEndData  ) = 0;

	//
	//Method Wrapper
	//
	struct DataTime  GetSelectionStartTime(long  nIndex  );
	void Deselect();
	struct DataTime  GetStartTime();
	struct DataTime  GetEndTime();
	struct DataTime  GetSelectionEndTime(long  nIndex  );
	long  GetSelectionCount();
	void SetSelectionTime(struct DataTime  tmStartData, struct DataTime  tmEndData  );
};

enum ChannelState
{ 
	CHANNEL_DISABLED = 3,
	CHANNEL_HOT = 1,
	CHANNEL_LAST = 4,
	CHANNEL_NORMAL = 0,
	CHANNEL_PRESS = 2 
};

enum PlayMode
{ 
	AsyncMode = 1,
	SyncMode = 0 
};

struct __declspec(uuid("a7e2e88c-5f12-4a8c-b819-cc4cdc14b8f9")) IDUITimerRuler : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetTimePointer(struct IDUITimePointer **pResult) = 0;
	virtual HRESULT __stdcall raw_GetStartTime(struct DataTime *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUITimePointer * GetTimePointer();
	struct DataTime  GetStartTime();
};


#include "AdvancedAll.tli"
#endif //__HEAD__ADVANCEDALL__