#ifndef __HEAD__KERNELALL__
#define __HEAD__KERNELALL__
#include <comdef.h>

#include <xstring>
using namespace std;
#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

struct __declspec(uuid("c5f79c22-52ab-484c-9db8-af583821df09")) DUILCItem;
enum LC_ICONSTYLE;

struct __declspec(uuid("728dd28d-be9e-4a02-a09a-5d4302622805")) IDUILCItem;
struct __declspec(uuid("e49e9945-f3a5-4e6d-a7ae-5a06c7452ed9")) IDUIListCtrl;
struct __declspec(uuid("ffffbca3-0cff-4eb5-8be3-769d6078cabe")) DUIListCtrl;
struct __declspec(uuid("89c3d6bb-9c3b-43f5-8c53-b2db41e69a2f")) _IDUIListCtrlEvents;
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUILCNotifyInfo;
enum DUI_LCMSGID;

enum ListCtrlMsgID;

enum LVCTRL_STYLE;

struct __declspec(uuid("6a9eb3be-2206-4511-b438-1ac892a72e52")) DUIDetector;
struct __declspec(uuid("041a69ec-7ef2-429d-b68e-1aac82f5cec8")) _IDUIDetectorEvents;
struct __declspec(uuid("06e6df4e-3e0a-4e21-ac89-ae3f27136d47")) DUIToolItem;
struct __declspec(uuid("6e573a20-ceb2-4f99-bde7-a7d88dacedd8")) _IDUIToolItemEvents;
struct __declspec(uuid("c53bbff3-3af7-430a-962b-179e8e5cd02c")) IDUIDetector;
struct __declspec(uuid("eabf9789-54b7-4864-b8ae-06a17a15ace8")) IDUIToolItem;
struct __declspec(uuid("8a50a186-c501-4671-82e0-9fb1a8b668a3")) IDUIToolString;
struct __declspec(uuid("ecaceca5-f280-4a75-8a88-4ce636ee0c4d")) DUIToolString;
struct __declspec(uuid("c1ab15c8-97be-4e68-bf36-6b33f56114ec")) _IDUIToolStringEvents;
enum TOOLITEM_STATE;

enum TOOLITEM_TYPE;

enum DUI_TOOLITEM_MESSAGE;

struct __declspec(uuid("1497d48b-866c-45b8-9b2e-3ae12b8ffd4e")) IDUIRollCtrl;
struct __declspec(uuid("74071236-428d-47b4-bef6-9e9dc2dd47e2")) DUIRollCtrl;
struct __declspec(uuid("14746394-0776-442b-8c91-d1551d58547f")) _IDUIRollCtrlEvents;
enum DUI_BLOCK_CLICK_MESSAGE;

struct __declspec(uuid("3353c9c8-f009-4018-be63-594ef0498ec9")) DUITagItem;
struct __declspec(uuid("c520bf70-ceb7-4074-b442-1fff127c9c27")) _IDUITagItemEvents;
struct __declspec(uuid("b124d660-e309-4228-b947-06bedd3b1024")) IDUITagItem;
struct __declspec(uuid("dc40e785-0a4b-4304-a553-254f0b6056b1")) IDUITagCtrl;
struct __declspec(uuid("50bf8331-cc93-4ecb-8668-5d33fab05405")) DUITagCtrl;
struct __declspec(uuid("927dfddc-c8fb-4ac7-a4ef-860241d94052")) _IDUITagCtrlEvents;
enum DUI_TAGITEM_MESSAGE;

struct __declspec(uuid("dd81f6f9-1e94-4bb9-8546-2297639b58cb")) IDUIRollCalendar;
struct __declspec(uuid("d6cf0b03-b8d6-4f5a-847f-4ef9bf5a0779")) DUIRollCalendar;
struct __declspec(uuid("011dcafd-b35b-4b6e-ab75-377f513632e9")) _IDUIRollCalendarEvents;
enum DUI_DATE_CHANGED_MESSAGE;

struct __declspec(uuid("a0e54c4f-520e-4429-9d04-d0bdcfbca7f2")) IDUIMeetingConflict;
struct __declspec(uuid("16f529e8-14ae-4a8b-9f21-7831f4a17a37")) DUIMeetingConflict;
struct __declspec(uuid("9b6c9c14-e381-4f16-b9b4-c26c269dd908")) _IDUIMeetingConflictEvents;
struct __declspec(uuid("d58a12ee-e346-4968-97c3-9cc51ad1275e")) IDUIGraphCtrl;
struct __declspec(uuid("bd596601-105d-4471-bdf4-6c0dcb9169e7")) DUIGraphCtrl;
struct __declspec(uuid("16a55d64-78d4-442d-a7a1-a5fbbb501fb6")) _IDUIGraphCtrlEvents;
struct __declspec(uuid("2c6b8e67-c39f-4375-a54f-3532dfbac8b5")) IDUISwitchCtrl;
struct __declspec(uuid("37a7dfd8-7e85-4552-9b0e-aabf2058e415")) DUISwitchCtrl;
struct __declspec(uuid("18c128ca-cce1-4419-abf4-403b03c7cd92")) _IDUISwitchCtrlEvents;
struct __declspec(uuid("9f7f9ce4-3ae3-4c96-a94c-726dabc95a4d")) IDUICalendarNextButton;
struct __declspec(uuid("e0c76c01-be99-4833-95ac-88aa7491a9dd")) DUICalendarNextButton;
struct __declspec(uuid("e7a83f65-efc8-4d47-b7c0-34d45e455c02")) _IDUICalendarNextButtonEvents;
struct __declspec(uuid("90f602f7-6ee3-4891-bd5a-a2de7a6597bb")) IDUICalendarPreButton;
struct __declspec(uuid("a5b02091-def5-4bbc-a079-0efe086ad55a")) DUICalendarPreButton;
struct __declspec(uuid("1ac48db9-9817-4cbc-9cac-a7910fea1e8d")) _IDUICalendarPreButtonEvents;
struct __declspec(uuid("b6d8d902-fd7f-4e78-a45b-c33fdfc13e69")) IDUICalendarButton;
struct __declspec(uuid("c5627681-b79e-4887-a7c7-c28713b8ef98")) DUICalendarButton;
struct __declspec(uuid("5cc09df8-ba0c-455f-abdb-35e21c52c567")) _IDUICalendarButtonEvents;
struct __declspec(uuid("7c266e68-5172-4df8-8ed2-9fbf83beda16")) IDUINextMonthDate;
struct __declspec(uuid("09465297-24c8-415c-84f5-f589384f51a8")) DUINextMonthDate;
struct __declspec(uuid("4d6a42ed-046e-4946-aa17-4a48dfb5a9b7")) _IDUINextMonthDateEvents;
struct __declspec(uuid("6d32edbc-1c32-4a92-a75f-9e704568c579")) IDUIPrevMonthDate;
struct __declspec(uuid("a7500296-21cb-4dbf-a78f-03c275d68126")) DUIPrevMonthDate;
struct __declspec(uuid("402b80f5-fef9-4296-9f0f-229d8ebeceee")) _IDUIPrevMonthDateEvents;
struct __declspec(uuid("f0eeabf6-697a-4c20-9bee-2b95ebc17c10")) IDUIOtherMonthDate;
struct __declspec(uuid("35f75bb6-0d82-45dd-b067-0b32dba67e27")) DUIOtherMonthDate;
struct __declspec(uuid("d205ceb1-6111-4e5c-9ccb-a29ae722e381")) _IDUIOtherMonthDateEvents;
struct __declspec(uuid("70548e58-d07a-47b2-9132-7e3ec6fb9c30")) IDUITheMonthDate;
struct __declspec(uuid("60625b0e-2be7-42d1-8090-7ef6a349fff3")) DUITheMonthDate;
struct __declspec(uuid("7c0ab66e-5c27-439e-bf6b-6d91998b9b1c")) _IDUITheMonthDateEvents;
struct __declspec(uuid("06d93fb7-f580-433b-afb0-38897cabe39e")) IDUIDateBase;
struct __declspec(uuid("6b2d5436-7c80-49c4-aa3e-04d93f46294e")) DUIDateBase;
struct __declspec(uuid("96fd4338-3328-4e94-bbda-8663534425a8")) _IDUIDateBaseEvents;
struct __declspec(uuid("d2e8b4f5-30b2-44e4-9c37-97d23c6cb0d5")) IDUIWeekBar;
struct __declspec(uuid("18ca7aa8-df47-42e6-aafa-c34ab5e64dac")) DUIWeekBar;
struct __declspec(uuid("5d581f5f-2b35-42d0-9ac0-49a89a8b8f5b")) _IDUIWeekBarEvents;
struct __declspec(uuid("d2a5c844-1613-4c0c-8a2f-6a2598adfc7a")) IDUIGridLayout;
struct __declspec(uuid("bc5955d4-7c3e-4fbb-872b-c3f280d8bea4")) DUIGridLayout;
struct __declspec(uuid("f9649c65-0641-40ba-b283-752221a4f9a7")) _IDUIGridLayoutEvents;
struct __declspec(uuid("50c05edd-5253-4efa-a736-d813435bc148")) IDUIYearMonthBar;
struct __declspec(uuid("1eace0be-11ad-4868-8b6e-85b0a8e264c5")) DUIYearMonthBar;
struct __declspec(uuid("4d7bca3d-2df5-4f6d-8b59-0d1edb2ca472")) _IDUIYearMonthBarEvents;
struct __declspec(uuid("02add505-acf2-4552-b98c-54304faf0581")) IDUICalendarCtrl;
struct __declspec(uuid("2bd62615-3c8c-46b2-acb3-428b7736a4c9")) DUICalendarCtrl;
struct __declspec(uuid("cfc5e855-04ce-4d94-96fb-b7a332d11956")) _IDUICalendarCtrlEvents;
struct __declspec(uuid("a5157f65-2a31-4eea-a810-9c6204364a2f")) DUI_CALENDARDATE;
enum DUI_WEEKTEXT;

struct __declspec(uuid("f65c8008-76d3-4c7f-911e-6a0b4727e123")) IDUICalendar;
struct __declspec(uuid("4f3bda34-5db9-4e85-b415-40e5288e52a9")) DUICalendar;
struct __declspec(uuid("e4406585-bbda-4ed7-b0c1-3f2dc72887a2")) _IDUICalendarEvents;
enum DUI_CALENDARDATE_MESSAGE;

struct __declspec(uuid("815e7c2d-0dab-401f-b90a-2ec19b7f5f5a")) DUITVItemBase;
struct __declspec(uuid("710b5422-6f38-4b98-9dea-dec806950b4a")) _IDUITVItemBaseEvents;
struct __declspec(uuid("7d458017-0d82-44ec-a6a2-d952ddeb3650")) IDUIFormBorder;
struct __declspec(uuid("e8088a89-cedb-44f4-b2e1-a4b7dacdaf98")) DUIFormBorder;
struct __declspec(uuid("210c3093-0154-4fc3-9663-e19503761b1f")) _IDUIFormBorderEvents;
enum DUIFORMBORDER_MSG;

enum DUI_LOGOBJSTATE;

struct __declspec(uuid("4efe6e7d-a2cd-48cb-a728-68765a3cacde")) IDUILogoObj;
struct __declspec(uuid("9fb5d596-0d35-441d-9b89-2716a46edf11")) DUILogoObj;
struct __declspec(uuid("b8fa7fce-ad5e-47ac-bf7c-a8d0e8d963cc")) _IDUILogoObjEvents;
struct __declspec(uuid("34158d44-8867-4d18-ba5b-9b3eafa67609")) IDUIMenuRadioItem;
struct __declspec(uuid("1bf4e7b8-a613-4850-9593-561cc539bd7d")) DUIMenuRadioItem;
struct __declspec(uuid("d49385fe-4978-4a06-b95f-40a776b8dc38")) _IDUIMenuRadioItemEvents;
enum DUI_MENUITEM_VALUE;

struct __declspec(uuid("9cd79df5-9138-4c3c-87ea-c6f87503a660")) IDUIMenuCheckItem;
struct __declspec(uuid("e57d51b4-569c-4d4f-ab18-64af7bbaa7b0")) DUIMenuCheckItem;
struct __declspec(uuid("e1e9969b-4085-4bde-a107-57aadc173057")) _IDUIMenuCheckItemEvents;
struct __declspec(uuid("61235c93-2501-4f7e-b17a-5ca5a63bb4ba")) IDUIMenuPushItem;
struct __declspec(uuid("e5933736-0cad-4115-b670-3ab552cc395b")) DUIMenuPushItem;
struct __declspec(uuid("8155f9cb-a975-4302-9a74-f771804440fa")) _IDUIMenuPushItemEvents;
enum DUI_MENUITEM_STATE;

struct __declspec(uuid("037a0aa9-4daf-4d1e-be4a-523e27dff7ad")) IDUIMenuItem;
struct __declspec(uuid("7c18ad9d-b0b6-4461-88be-afb569a659af")) DUIMenuItem;
struct __declspec(uuid("a12773cb-c250-455b-8f96-416a22fe40e2")) _IDUIMenuItemEvents;
struct __declspec(uuid("65e26ee2-3dbe-4c64-aaf9-3c5158966bc6")) DUIMenuItemBase;
struct __declspec(uuid("32ee65fd-2c6c-4da3-904c-74922c81d5a0")) _IDUIMenuItemBaseEvents;
struct __declspec(uuid("461a39b7-b543-450e-a7bd-400333139322")) PopMenu;
struct __declspec(uuid("09fac616-5c11-4586-99eb-4f95bf210715")) _IPopMenuEvents;
struct __declspec(uuid("d00e7e9b-3aad-4e6c-a2c2-fb36f09fc29a")) IPopMenu;
struct __declspec(uuid("1043b34a-f803-4cf3-99f7-800823c77fa4")) IDUIMenuItemBase;
enum DUI_MENUITEM_STYLE;

enum DUI_TPMSTYLE;

struct __declspec(uuid("060953cf-29f4-44b2-803c-a98160e6125e")) IDUIPopupMenu;
struct __declspec(uuid("53695c8a-0f08-4bde-8a7a-014ff9c5c03e")) DUIPopupMenu;
struct __declspec(uuid("847b04a3-b9cd-4533-b3e2-77659aa2aaff")) _IDUIPopupMenuEvents;
enum DUI_PMMSG;

struct __declspec(uuid("96362c75-f86d-40c2-898a-9976cf932201")) IDUIComboBox;
struct __declspec(uuid("3ccc4249-6742-4e12-bc81-ce051bbbaab3")) DUIComboBox;
struct __declspec(uuid("62ced240-17ee-49b1-bf83-97493f870742")) _IDUIComboBoxEvents;
enum DUI_CBNOTIFY;

struct __declspec(uuid("d353b642-3ef3-4df3-a391-d08838f0fadd")) IDUIHwndObj;
struct __declspec(uuid("57f669c8-037c-4791-bd81-4682c64e9561")) DUIHwndObj;
struct __declspec(uuid("fe0d0ae1-5783-4e7b-b754-ffbb79853e2a")) _IDUIHwndObjEvents;
struct __declspec(uuid("795a2ffc-77b6-4c61-9fe2-100bab616958")) IDUIStarCtrl;
struct __declspec(uuid("148aba02-9e12-4c1a-af06-e6bf731aed21")) DUIStarCtrl;
struct __declspec(uuid("ebab06c3-6d72-42fb-b067-6b31629c4666")) _IDUIStarCtrlEvents;
struct __declspec(uuid("3eaac027-2e9c-48ac-8a27-5625cb136a1d")) IDUIToolBarPushExButton;
struct __declspec(uuid("152bc807-910a-46ee-938a-5544c25e882b")) DUIToolBarPushExButton;
struct __declspec(uuid("b0b437e3-b580-4a98-b864-e9248037bf22")) _IDUIToolBarPushExButtonEvents;
struct __declspec(uuid("cf248ae2-816c-4837-952c-d3384ac83380")) IDUIToolBarPushButton;
struct __declspec(uuid("e6164099-10d0-4bd8-a9ee-d6daece7685d")) DUIToolBarPushButton;
struct __declspec(uuid("1faa37cb-f115-48ab-a4d3-a658868ba693")) _IDUIToolBarPushButtonEvents;
struct __declspec(uuid("5ea6dd29-42cd-405d-b5d3-3538ea134c6a")) IDUIToolBarRadioButton;
struct __declspec(uuid("7ce588ba-e8ec-493c-bfd2-e49bc3291387")) DUIToolBarRadioButton;
struct __declspec(uuid("e25eec9d-7962-429e-95d7-39cea829b048")) _IDUIToolBarRadioButtonEvents;
struct __declspec(uuid("96dac691-965b-4ba7-8eff-caed194cf4f0")) DUIToolBarMoreButton;
struct __declspec(uuid("262ec41c-b02d-4065-9428-6a5e6684f06e")) _IDUIToolBarMoreButtonEvents;
struct __declspec(uuid("1157617f-b8f2-490c-bb83-bd0436a772cf")) IDUIToolBarCheckButton;
struct __declspec(uuid("33615617-2471-4b57-96c0-cd221cee3757")) DUIToolBarCheckButton;
struct __declspec(uuid("504eab65-63cf-4e17-9ee5-e1db6e9c7a2d")) _IDUIToolBarCheckButtonEvents;
struct __declspec(uuid("e44fad6d-9cf1-40ba-a229-206dd2775354")) IDUIToolBarButton;
struct __declspec(uuid("49826893-9bf2-4cb1-8a7c-646de22efedf")) DUIToolBarButton;
struct __declspec(uuid("275ab4a8-c582-4511-adea-1f4fed4cd992")) _IDUIToolBarButtonEvents;
struct __declspec(uuid("b8e89b82-d3f3-4ca5-931d-23faaea99e38")) DUIToolBarItemBase;
struct __declspec(uuid("77a87fa6-4dee-4cf7-a1ed-a03029590b94")) _IDUIToolBarItemBaseEvents;
enum DUI_TBITEM_STATE;

struct __declspec(uuid("c73993ae-62a7-4bd7-90ec-60ee60bb9a9b")) IDUIToolBarMoreButton;
struct __declspec(uuid("13ac2104-6224-45f1-acab-1332c31db9af")) IDUIToolBarItemBase;
enum DUI_TBITEM_STYLE;

struct __declspec(uuid("330453eb-d8aa-49d8-b9b2-9908ebb0efc2")) IDUIToolBar;
struct __declspec(uuid("969c98e1-5ef5-4aec-9ee0-96124a93d964")) DUIToolBar;
struct __declspec(uuid("3978736b-af48-4a8d-ba3f-364ba69edb11")) _IDUIToolBarEvents;
enum DUI_TBMSG;

struct __declspec(uuid("d837bfb4-d917-4c55-b2d6-7367f07750a3")) DUITabButton;
struct __declspec(uuid("e347d012-d23b-42fc-b286-9666e2ce04e2")) _IDUITabButtonEvents;
struct __declspec(uuid("66cb8310-eddf-423f-871f-ea1560b17320")) DUITabCtrlItem;
struct __declspec(uuid("972e6566-0d32-47dc-b377-0f12a5fe73de")) _IDUITabCtrlItemEvents;
struct __declspec(uuid("d7701a5b-6816-4b7a-9e3f-6c3d3e49c133")) IDUITabButton;
struct __declspec(uuid("efe34b1e-bad6-4ff1-9ba7-506933730f90")) IDUITabCtrlItem;
struct __declspec(uuid("965dda96-37fc-42ee-b19f-c24dcb97d7de")) IDUITabCtrl;
struct __declspec(uuid("23aa82e2-1db3-4eb1-8307-5ece2510fd85")) DUITabCtrl;
struct __declspec(uuid("307dffd3-f593-4c30-b982-6965c1b3c89b")) _IDUITabCtrlEvents;
enum DUI_TABCTRLMSGID;

enum DUITABITEM_STATE;

enum DUITABCTRL_STATE;

enum DUITABCTRL_BTN_ID;

enum DUITABCTRL_STYLE;

enum DUI_ENUM_WORDTYPE;

enum DUI_HYPERLINKTEXTSTYLE;

enum DUI_STATICSTATE;

struct __declspec(uuid("185b692c-d061-49b7-94c0-a60ace529654")) IDUIStatic;
struct __declspec(uuid("0a44ca5a-acf6-49cc-abdb-a9a9b685b7c2")) DUIStatic;
struct __declspec(uuid("0cfd17bf-1297-4787-9b99-365531a9481a")) _IDUIStaticEvents;
struct __declspec(uuid("be34175e-58a7-41ef-85e1-30b0e10618e9")) IDUISplitter;
struct __declspec(uuid("43b85778-4f54-432e-bae0-7ac12c444d1b")) DUISplitter;
struct __declspec(uuid("a6fbd1bb-7635-435d-bf34-71bfd97acfe6")) _IDUISplitterEvents;
enum DUI_SPIN_BUTTON_STATE;

struct __declspec(uuid("fdd237f1-6354-4b57-9b3b-ad0548d1d15c")) IDUISpin;
struct __declspec(uuid("3ae3e21e-4f4d-42dc-933b-5002191c8875")) DUISpin;
struct __declspec(uuid("32fba143-3572-437b-9660-3be5b18b7893")) _IDUISpinEvents;
enum DUI_POINTTYPE;

enum DUI_SLIDERCTRLTYPE;

struct __declspec(uuid("5c5eea05-959a-4b52-8fd7-d9466a383336")) IDUISliderbar;
struct __declspec(uuid("fb03bbd2-4901-47fe-b3ae-1f75a217b89f")) DUISliderbar;
struct __declspec(uuid("98eb84dc-e572-422e-b913-b36b5720da52")) _IDUISliderbarEvents;
enum DUISliderMsgID;

struct __declspec(uuid("009a49b7-d047-414e-b0d2-1939fb29cc58")) IDUIScrollContainer;
struct __declspec(uuid("40447201-a820-4f89-9135-11a509dcdeba")) DUIScrollContainer;
struct __declspec(uuid("45bb233d-e6b0-46ee-8809-25f006f557ee")) _IDUIScrollContainerEvents;
enum DUI_SCROLLCONTAINER_STYLE;

struct __declspec(uuid("aa5f6fa9-4983-4fc8-a8ab-2a98ab6cbb6e")) DUIScrollBar;
struct __declspec(uuid("5f7ff530-450b-4d06-a892-f1868154bc46")) _IDUIScrollBarEvents;
enum DUI_SCROLLBARMSGID;

enum PROGRESSBAR_STYLE;

struct __declspec(uuid("09d5e6a5-adbe-4a26-a53a-1f2130359f98")) IDUIProgressbar;
struct __declspec(uuid("d96293c7-f705-4c2b-b3ed-b3483256690b")) DUIProgressbar;
struct __declspec(uuid("8c2c239e-761f-4168-a935-b57bf1743c82")) _IDUIProgressbarEvents;
enum DUI_MENUBAR_ITEM_STATE;

struct __declspec(uuid("9985e759-5eeb-4667-99fa-e26b266fcec3")) IDUIMenuBar;
struct __declspec(uuid("99729352-f837-4dde-9344-47aba9eb7ea8")) DUIMenuBar;
struct __declspec(uuid("7ffc22f0-e2a9-4ce6-9b45-5f9dace36fbf")) _IDUIMenuBarEvents;
enum DUI_MUMEBARMSG;

struct __declspec(uuid("1fd58a0d-2a70-4b18-abf0-c7aa65f8f620")) DUITVItem;
struct __declspec(uuid("bb56cb4e-769b-49f7-b58d-212bf45eca2e")) _IDUITVItemEvents;
struct __declspec(uuid("a4cecb0c-bf1a-43dc-b9bd-6cb394d5b6e4")) DUITVItemGroup;
struct __declspec(uuid("f36e2551-bd03-46c1-a4da-86a30702a528")) _IDUITVItemGroupEvents;
struct __declspec(uuid("660b1804-27d5-4f13-9c73-00857e43c675")) DUIUnitItem;
struct __declspec(uuid("226d3a7d-2e9c-4ec9-b195-8524bdd75696")) _IDUIUnitItemEvents;
struct __declspec(uuid("7df98b00-24c2-4dcd-bee3-dad117b5f20d")) DUITVColumn;
struct __declspec(uuid("1cb23c69-3d5a-41b1-b2f6-738d777d583e")) _IDUILVColumnEvents;
struct __declspec(uuid("15056816-1230-4e86-a4b3-39f2322aff68")) DUILV_IDPAIR;
enum DUISCOLLBAR_STATE;

struct __declspec(uuid("55b6b586-5576-4e7d-8c4e-054e6af1e98f")) DUISCROLLBARINFO;
enum DUISB_MASK;

struct __declspec(uuid("5826dfa3-a219-4887-bdb3-1053debf0847")) DUISCROLLINFO;
struct __declspec(uuid("333ac87d-148e-4985-9ac9-b68bec61fd03")) IDUIScrollBar;
struct __declspec(uuid("927565b4-6573-4532-ad69-9296e3f05437")) IDUITVItem;
struct __declspec(uuid("2b166dd5-13a6-4f53-8991-7b0707ab4528")) IDUITVItemGroup;
enum DUILV_TYPE;

struct __declspec(uuid("51d77114-3e1c-4f0c-92c8-c091b867d715")) IDUITVItemBase;
struct __declspec(uuid("5e93c67f-3f40-4a3a-ae0d-89934583d937")) IDUIUnitItem;
enum DUILV_UNITITEM_VERT;

enum DUILV_UNITITEM_HORZ;

struct __declspec(uuid("60b9e5f3-cf6f-448b-b4c4-8c40fe4cc7e6")) IDUILVColumn;
enum DUILVI_STATE;

struct __declspec(uuid("8c487988-d98b-4ace-8cfb-a3eab58f71e8")) IDUIListView;
struct __declspec(uuid("96bb6d39-151c-46e8-b339-c0a30280797a")) DUIListView;
struct __declspec(uuid("12d6f2ff-b95c-4096-ac78-4e543e39e6ac")) _IDUIListViewEvents;
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUILVNotifyInfo;
enum ListViewMsgID;

enum DUI_LVMSGID;

enum DUILV_STYLE;

enum DUI_ITEMCSTATE;

struct __declspec(uuid("6cc4878d-d2e9-490a-b465-df4404e1624a")) IDUItemContainer;
struct __declspec(uuid("8eb88598-a517-4801-9ff5-b448ab8c0475")) DUItemContainer;
struct __declspec(uuid("9cd9834b-7fc2-4770-ac28-5de39e6ebc93")) _IDUItemContainerEvents;
enum DUI_HEADERCTRL_ALIGNTYPE;

enum DUI_HEADERCTRL_SORT;

enum DUIHADER_STATE;

struct __declspec(uuid("3ef5ca57-d800-4d21-acda-018c48ec1dda")) IDUIHeaderCtrl;
struct __declspec(uuid("cdb4a3c7-705b-4ddd-b46f-466224d1113b")) DUIHeaderCtrl;
struct __declspec(uuid("ba6cf79d-3511-48eb-99ba-99c8730ecf02")) _IDUIHeaderCtrlEvents;
enum DUI_HEADERCTRL_NOTIFY;

enum DUI_HEADERCTRL_TYPE;

enum DUI_EDIT_STATE;

enum DUI_EDIT_RENDER_HINT;

struct __declspec(uuid("b260d36a-f8bc-4063-9803-04f10cc50caf")) IDUIEditCtrl;
struct __declspec(uuid("7d7d0bf2-9127-47ba-9d3d-ed75d4b61121")) DUIEditCtrl;
struct __declspec(uuid("5856e73f-0f1c-48cd-8891-4fc8c1e0f618")) _IDUIEditCtrlEvents;
enum DUI_EDIT_MESSAGE;

enum DUI_PSLANIMATETYPE;

struct __declspec(uuid("4fe4a7f0-5b64-48f2-8988-cbdb289cae65")) PSLItem;
struct __declspec(uuid("bca49011-c0e0-4a87-943e-4ce1325a6e94")) IDUIPopupSingleList;
struct __declspec(uuid("79449d60-75c1-4f82-80f9-2b018e7a74d8")) DUIPopupSingleList;
struct __declspec(uuid("0726a52a-0301-4a2c-9b3d-a4fc994c0648")) _IDUIPopupSingleListEvents;
struct __declspec(uuid("530ba3db-1155-4a35-868c-e713309f87e6")) TestStruct;
enum DUI_PSLMESSAGEID;

struct __declspec(uuid("ee8b787f-79ef-4f6a-a4ee-3815754e51bd")) DUIRadioGroup;
struct __declspec(uuid("3cb73c34-82c7-4fe6-8dbd-b9c7e1d7c729")) _IDUIRadioGroupEvents;
struct __declspec(uuid("5e582ff1-a6f7-44db-af8c-63e479108054")) IDUIRadioGroup;
enum DUIRADIOBOX_VALUE;

enum DUI_RADIOBOXSTATE;

struct __declspec(uuid("5f3484b6-8ad9-4b61-9f46-216d5932dc97")) IRadioBox;
struct __declspec(uuid("8110881d-ca4f-43e0-99b1-0d0b9f15f364")) RadioBox;
struct __declspec(uuid("2e827b84-8d65-48db-ad24-ff62b21af4eb")) _IRadioBoxEvents;
struct __declspec(uuid("18ff4245-0c90-417f-9846-d2e94a5f9aa8")) IUIFormObj;
struct __declspec(uuid("17413601-408f-4a0a-a495-35ffb7c3d9dd")) UIFormObj;
struct __declspec(uuid("ee5ceed1-a6fb-4822-82ec-87a7bd8b699c")) _IUIFormObjEvents;
enum DUICHECKBOX_VALUE;

enum DUI_CHECKBOXSTATE;

struct __declspec(uuid("776bdc16-3ed8-4a7b-8078-45dd3f0f58a6")) IDUICheckBox;
struct __declspec(uuid("aa5741a3-7e66-438a-9d1d-6f9829a2379b")) DUICheckBox;
struct __declspec(uuid("78065189-4d2c-4b0d-ac1d-10776d20ecc7")) _IDUICheckBoxEvents;
struct __declspec(uuid("79bbb9bd-25ab-44e1-a100-bb70aae02e17")) IDUIAnimate;
struct __declspec(uuid("15be03c8-3e96-4355-8b1c-2ec1aa1f1d50")) DUIAnimate;
struct __declspec(uuid("ccb5e0c9-8191-4760-b51f-d8ab053511b4")) _IDUIAnimateEvents;
enum DUI_BUTTONSTATE;

struct __declspec(uuid("5c0bdd81-2ee0-41c2-a42f-b1d7edc4a9d6")) ICmdButton;
struct __declspec(uuid("9d16f301-cdf1-46b8-b95e-982af85e06ae")) CmdButton;
struct __declspec(uuid("2f998451-f796-49ee-990a-96988dccd035")) _ICmdButtonEvents;
struct __declspec(uuid("2f998451-f796-49ee-990a-96988dccd035")) _ICmdButtonEvents : IDispatch
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

struct __declspec(uuid("5c0bdd81-2ee0-41c2-a42f-b1d7edc4a9d6")) ICmdButton : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonState(enum DUI_BUTTONSTATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonState(enum DUI_BUTTONSTATE eState  ) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsFilePath(BSTR strFilePath, short nOffsetX, short nOffsetY, short nCount, VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsFilePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicshIcon(OLE_HANDLE hIcon, short nOffsetX, short nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicshIcon(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetUpDownMode(VARIANT_BOOL bUpDownMode  ) = 0;
	virtual HRESULT __stdcall raw_IsUpDownMode(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicOffset(long nOffsetX, long nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicOffset(long *pnOffsetX, long *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_ShowText(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_IsShowText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImageSec(enum DUI_BUTTONSTATE eState, struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_GetBackImageSec(enum DUI_BUTTONSTATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackTextStyle(enum DUI_BUTTONSTATE eState, struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetBackTextStyle(enum DUI_BUTTONSTATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsImage(enum DUI_BUTTONSTATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsImage(enum DUI_BUTTONSTATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetFileIcon(BSTR sFilePath  ) = 0;
	virtual HRESULT __stdcall raw_GetTextLength(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetActive(VARIANT_BOOL bActive  ) = 0;
	virtual HRESULT __stdcall raw_IsActive(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicshBitmap(OLE_HANDLE hBitmap, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicshBitmap(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImageFile(enum DUI_BUTTONSTATE eState, BSTR strFileName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackhBitmap(enum DUI_BUTTONSTATE eState, OLE_HANDLE hBitmap, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackhBitmap(enum DUI_BUTTONSTATE eState, OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	enum DUI_BUTTONSTATE  GetButtonState();
	void SetButtonState(enum DUI_BUTTONSTATE  eState  );
	void SetGraphicsFilePath(tstring  strFilePath, short  nOffsetX, short  nOffsetY, short  nCount, BOOL  bHorz  );
	tstring  GetGraphicsFilePath();
	void SetGraphicshIcon(OLE_HANDLE  hIcon, short  nOffsetX, short  nOffsetY  );
	OLE_HANDLE  GetGraphicshIcon();
	void SetUpDownMode(BOOL  bUpDownMode  );
	BOOL  IsUpDownMode();
	void SetTooltip(tstring  strTooltip  );
	tstring  GetTooltip();
	void SetGraphicOffset(long  nOffsetX, long  nOffsetY  );
	void GetGraphicOffset(long * pnOffsetX, long * pnOffsetY  );
	void ShowText(BOOL  bShow  );
	BOOL  IsShowText();
	void SetBackImageSec(enum DUI_BUTTONSTATE  eState, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetBackImageSec(enum DUI_BUTTONSTATE  eState  );
	void SetBackTextStyle(enum DUI_BUTTONSTATE  eState, struct IDUITextStyle * pTextStyle  );
	struct IDUITextStyle * GetBackTextStyle(enum DUI_BUTTONSTATE  eState  );
	BOOL  SetGraphicsImage(enum DUI_BUTTONSTATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetGraphicsImage(enum DUI_BUTTONSTATE  eState  );
	void SetFileIcon(tstring  sFilePath  );
	short  GetTextLength();
	void SetActive(BOOL  bActive  );
	BOOL  IsActive();
	void SetGraphicshBitmap(OLE_HANDLE  hBitmap, BOOL  bRedraw  );
	OLE_HANDLE  GetGraphicshBitmap();
	BOOL  SetBackImageFile(enum DUI_BUTTONSTATE  eState, tstring  strFileName  );
	BOOL  SetBackhBitmap(enum DUI_BUTTONSTATE  eState, OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetBackhBitmap(enum DUI_BUTTONSTATE  eState  );
};

enum DUI_BUTTONSTATE
{ 
	DUI_BTN_DISABLE = 2,
	DUI_BTN_FOCUS = 4,
	DUI_BTN_HOT = 3,
	DUI_BTN_LAST = 5,
	DUI_BTN_NORMAL = 0,
	DUI_BTN_PRESS = 1 
};

struct __declspec(uuid("ccb5e0c9-8191-4760-b51f-d8ab053511b4")) _IDUIAnimateEvents : IDispatch
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

struct __declspec(uuid("79bbb9bd-25ab-44e1-a100-bb70aae02e17")) IDUIAnimate : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetFramesCount(long nCount  ) = 0;
	virtual HRESULT __stdcall raw_GetFramesCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpeed(long nSpeed  ) = 0;
	virtual HRESULT __stdcall raw_GetSpeed(long *pResult) = 0;
	virtual HRESULT __stdcall raw_StartAnimate() = 0;
	virtual HRESULT __stdcall raw_StopAnimate(short nFrame  ) = 0;
	virtual HRESULT __stdcall raw_SetAutoStop(VARIANT_BOOL bAutoStop, short nElapse  ) = 0;

	//
	//Method Wrapper
	//
	void SetFramesCount(long  nCount  );
	long  GetFramesCount();
	void SetSpeed(long  nSpeed  );
	long  GetSpeed();
	void StartAnimate();
	void StopAnimate(short  nFrame = 0  );
	void SetAutoStop(BOOL  bAutoStop, short  nElapse  );
};

struct __declspec(uuid("78065189-4d2c-4b0d-ac1d-10776d20ecc7")) _IDUICheckBoxEvents : IDispatch
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

struct __declspec(uuid("776bdc16-3ed8-4a7b-8078-45dd3f0f58a6")) IDUICheckBox : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonState(enum DUI_CHECKBOXSTATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonState(enum DUI_CHECKBOXSTATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetValue(enum DUICHECKBOX_VALUE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(enum DUICHECKBOX_VALUE eValue  ) = 0;
	virtual HRESULT __stdcall raw_SetThreeState(VARIANT_BOOL bThreeState  ) = 0;
	virtual HRESULT __stdcall raw_GetThreeState(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowText(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_IsShowText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPushButtonLike(VARIANT_BOOL bPushButtonLike  ) = 0;
	virtual HRESULT __stdcall raw_IsPushButtonLike(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetActive(VARIANT_BOOL bActive  ) = 0;
	virtual HRESULT __stdcall raw_IsActive(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphics(OLE_HANDLE hIcon, VARIANT_BOOL bIsIcon  ) = 0;
	virtual HRESULT __stdcall raw_SetImage(enum DUI_CHECKBOXSTATE eState, enum DUICHECKBOX_VALUE eValue, struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_GetImage(enum DUI_CHECKBOXSTATE eState, enum DUICHECKBOX_VALUE eValue, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsImage(enum DUI_CHECKBOXSTATE eState, enum DUICHECKBOX_VALUE eValue, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsImage(enum DUI_CHECKBOXSTATE eState, enum DUICHECKBOX_VALUE eValue, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageByHBitmap(enum DUI_CHECKBOXSTATE eState, enum DUICHECKBOX_VALUE eValue, OLE_HANDLE hBitmap  ) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	enum DUI_CHECKBOXSTATE  GetButtonState();
	void SetButtonState(enum DUI_CHECKBOXSTATE  eState  );
	enum DUICHECKBOX_VALUE  GetValue();
	void SetValue(enum DUICHECKBOX_VALUE  eValue  );
	void SetThreeState(BOOL  bThreeState  );
	BOOL  GetThreeState();
	void SetTooltip(tstring  strTooltip  );
	tstring  GetTooltip();
	void ShowText(BOOL  bShow  );
	BOOL  IsShowText();
	void SetPushButtonLike(BOOL  bPushButtonLike  );
	BOOL  IsPushButtonLike();
	void SetActive(BOOL  bActive  );
	BOOL  IsActive();
	void SetData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetData();
	void SetGraphics(OLE_HANDLE  hIcon, BOOL  bIsIcon  );
	void SetImage(enum DUI_CHECKBOXSTATE  eState, enum DUICHECKBOX_VALUE  eValue, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetImage(enum DUI_CHECKBOXSTATE  eState, enum DUICHECKBOX_VALUE  eValue  );
	BOOL  SetGraphicsImage(enum DUI_CHECKBOXSTATE  eState, enum DUICHECKBOX_VALUE  eValue, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetGraphicsImage(enum DUI_CHECKBOXSTATE  eState, enum DUICHECKBOX_VALUE  eValue  );
	void SetImageByHBitmap(enum DUI_CHECKBOXSTATE  eState, enum DUICHECKBOX_VALUE  eValue, OLE_HANDLE  hBitmap  );
};

enum DUI_CHECKBOXSTATE
{ 
	DUI_CHECKBOX_DISABLE = 3,
	DUI_CHECKBOX_HOT = 1,
	DUI_CHECKBOX_LAST = 4,
	DUI_CHECKBOX_NORMAL = 0,
	DUI_CHECKBOX_PRESS = 2 
};

enum DUICHECKBOX_VALUE
{ 
	DUICHECKBOX_CHECKED = 1,
	DUICHECKBOX_HALFCHECKED = 2,
	DUICHECKBOX_UNCHECKED = 0 
};

struct __declspec(uuid("ee5ceed1-a6fb-4822-82ec-87a7bd8b699c")) _IUIFormObjEvents : IDispatch
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

struct __declspec(uuid("18ff4245-0c90-417f-9846-d2e94a5f9aa8")) IUIFormObj : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetDrawColor(VARIANT_BOOL bDrawColor  ) = 0;
	virtual HRESULT __stdcall raw_GetDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImageSec(struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_GetBackImageSec(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pFillColor  ) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackBitmapPath(BSTR szImagePath, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackBitmapPath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetShowBitmap(VARIANT_BOOL bShowBitmap  ) = 0;
	virtual HRESULT __stdcall raw_IsShowBitmap(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackBitmap(OLE_HANDLE hBitmap, struct IDUIRenderImage **pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackBitmap(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteBackBitmap() = 0;

	//
	//Method Wrapper
	//
	void SetDrawColor(BOOL  bDrawColor  );
	BOOL  GetDrawColor();
	void SetBackImageSec(struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetBackImageSec();
	void SetBackColor(struct IFillColor * pFillColor  );
	struct IFillColor * GetBackColor();
	BOOL  SetBackBitmapPath(tstring  szImagePath, BOOL  bRedraw  );
	tstring  GetBackBitmapPath();
	void SetShowBitmap(BOOL  bShowBitmap  );
	BOOL  IsShowBitmap();
	struct IDUIRenderImage * SetBackBitmap(OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetBackBitmap();
	void DeleteBackBitmap();
};

struct __declspec(uuid("2e827b84-8d65-48db-ad24-ff62b21af4eb")) _IRadioBoxEvents : IDispatch
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

struct __declspec(uuid("5f3484b6-8ad9-4b61-9f46-216d5932dc97")) IRadioBox : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonState(enum DUI_RADIOBOXSTATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonState(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsFilePath(BSTR strFilePath, short nOffsetX, short nOffsetY, short nCount, VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsFilePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(enum DUIRADIOBOX_VALUE eValue, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetValue(enum DUIRADIOBOX_VALUE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetUpDownMode(VARIANT_BOOL bUpDownMode, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsUpDownMode(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicOffset(long nOffsetX, long nOffsetY, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicOffset(long *pnOffsetX, long *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_ShowText(VARIANT_BOOL bShow, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsShowText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_StartBlink(short nIDEvent, short nElapse  ) = 0;
	virtual HRESULT __stdcall raw_StopBlink() = 0;
	virtual HRESULT __stdcall raw_SetChildWndImage(BSTR strPicPath, short nRightSpaceX, short nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_SetBlinkImage(BSTR strPicPath  ) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, OLE_COLOR clrBack, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBoxImage(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBoxImage(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsImage(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsImage(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsBmp(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, OLE_HANDLE hBitmap, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsBmp(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUITextStyle *pTextStyle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(enum DUI_RADIOBOXSTATE eState, VARIANT_BOOL bChecked, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackDrawColor(VARIANT_BOOL bDrawColor  ) = 0;
	virtual HRESULT __stdcall raw_GetBackDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicSize(long nWidth, long nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicSize(long *pnWidth, long *pnHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetGroupID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupID(long *plResult  ) = 0;
	virtual HRESULT __stdcall raw_GetGroup(struct IDUIRadioGroup **pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText, BOOL  bRedraw  );
	tstring  GetText();
	enum DUI_RADIOBOXSTATE  GetButtonState();
	void SetButtonState(enum DUI_RADIOBOXSTATE  eState, BOOL  bRedraw  );
	void SetGraphicsFilePath(tstring  strFilePath, short  nOffsetX, short  nOffsetY, short  nCount, BOOL  bHorz  );
	tstring  GetGraphicsFilePath();
	void SetValue(enum DUIRADIOBOX_VALUE  eValue, BOOL  bRedraw  );
	enum DUIRADIOBOX_VALUE  GetValue();
	void SetUpDownMode(BOOL  bUpDownMode, BOOL  bRedraw  );
	BOOL  IsUpDownMode();
	void SetTooltip(tstring  strTooltip  );
	tstring  GetTooltip();
	void SetGraphicOffset(long  nOffsetX, long  nOffsetY, BOOL  bRedraw  );
	void GetGraphicOffset(long * pnOffsetX, long * pnOffsetY  );
	void ShowText(BOOL  bShow, BOOL  bRedraw  );
	BOOL  IsShowText();
	void StartBlink(short  nIDEvent, short  nElapse  );
	void StopBlink();
	void SetChildWndImage(tstring  strPicPath, short  nRightSpaceX, short  nOffsetY  );
	void SetBlinkImage(tstring  strPicPath  );
	BOOL  SetBackImage(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetBackImage(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked  );
	BOOL  SetBackColor(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked, OLE_COLOR  clrBack  );
	OLE_COLOR  GetBackColor(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked  );
	BOOL  SetBoxImage(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetBoxImage(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked  );
	BOOL  SetGraphicsImage(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetGraphicsImage(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked  );
	BOOL  SetGraphicsBmp(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked, OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetGraphicsBmp(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked  );
	BOOL  SetTextStyle(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked, struct IDUITextStyle * pTextStyle  );
	struct IDUITextStyle * GetTextStyle(enum DUI_RADIOBOXSTATE  eState, BOOL  bChecked  );
	void SetBackDrawColor(BOOL  bDrawColor  );
	BOOL  GetBackDrawColor();
	void SetData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetData();
	BOOL  SetGraphicSize(long  nWidth, long  nHeight, BOOL  bRedraw  );
	void GetGraphicSize(long * pnWidth, long * pnHeight  );
	BOOL  SetGroupID(long  nID  );
	void GetGroupID(long * plResult  );
	struct IDUIRadioGroup * GetGroup();
};

enum DUI_RADIOBOXSTATE
{ 
	DUI_RADIOBOX_DISABLE = 3,
	DUI_RADIOBOX_HOT = 1,
	DUI_RADIOBOX_LAST = 4,
	DUI_RADIOBOX_NORMAL = 0,
	DUI_RADIOBOX_PRESS = 2 
};

enum DUIRADIOBOX_VALUE
{ 
	DUIRADIOBOX_CHECKED = 1,
	DUIRADIOBOX_UNCHECKED = 0 
};

struct __declspec(uuid("5e582ff1-a6f7-44db-af8c-63e479108054")) IDUIRadioGroup : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_AddObject(struct IRadioBox *pRadioBox  ) = 0;
	virtual HRESULT __stdcall raw_RemoveObject(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_SetRadio(struct IRadioBox *pRadioBox  ) = 0;
	virtual HRESULT __stdcall raw_GetRadio(struct IRadioBox **pResult) = 0;

	//
	//Method Wrapper
	//
	long  GetID();
	void AddObject(struct IRadioBox * pRadioBox  );
	void RemoveObject(tstring  strName  );
	void SetRadio(struct IRadioBox * pRadioBox  );
	struct IRadioBox * GetRadio();
};

struct __declspec(uuid("3cb73c34-82c7-4fe6-8dbd-b9c7e1d7c729")) _IDUIRadioGroupEvents : IDispatch
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

enum DUI_PSLMESSAGEID
{ 
	DUI_PSLMSG_DBCLK = 2929,
	DUI_PSLMSG_ERRSPACE = 2930,
	DUI_PSLMSG_HIDE = 2935,
	DUI_PSLMSG_KILLFOCUS = 2931,
	DUI_PSLMSG_SELCANCEL = 2932,
	DUI_PSLMSG_SELCHANGED = 2928,
	DUI_PSLMSG_SELECTED = 2936,
	DUI_PSLMSG_SETFOCUS = 2933,
	DUI_PSLMSG_SHOW = 2934 
};

struct __declspec(uuid("530ba3db-1155-4a35-868c-e713309f87e6")) TestStruct
{
	BSTR 	strName;
	long 	bSupport;
	unsigned long 	clrTrans;
	struct IDUIImageBase *	pImageBase;
	struct DUIPosition 	duiPos;
	IDispatch *	pDispatch;
};

struct __declspec(uuid("0726a52a-0301-4a2c-9b3d-a4fc994c0648")) _IDUIPopupSingleListEvents : IDispatch
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

struct __declspec(uuid("bca49011-c0e0-4a87-943e-4ce1325a6e94")) IDUIPopupSingleList : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddItem(BSTR strName, BSTR strText, BSTR strShortcut, long nImageIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItem(long nIndex, BSTR strName, BSTR strText, BSTR strShortcut, long nImageIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemText(long nIndex, BSTR *pstrText, BSTR *pstrShortcut, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemText(long nIndex, BSTR strText, BSTR strShortcut, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTextByName(BSTR strName, BSTR *pstrText, BSTR *pstrShortcut, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTextByName(BSTR strName, BSTR strText, BSTR strShortcut, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItem(long nIndex, struct PSLItem *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItem(long nIndex, struct PSLItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCurrentItem(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCurrentItem(long nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemData(long nIndex, OLE_HANDLE hData, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemData(long nIndex, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemName(long nIndex, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemIndex(BSTR strName, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWinPos(short x, short y  ) = 0;
	virtual HRESULT __stdcall raw_SetListWidth(short nWidth  ) = 0;
	virtual HRESULT __stdcall raw_GetListWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetListHeight(short nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetListHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetListMaxHeight(short nMaxHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetListMaxHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(long nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Show(VARIANT_BOOL bShow, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawItemColor(VARIANT_BOOL bDrawColor  ) = 0;
	virtual HRESULT __stdcall raw_GetDrawItemColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemBackImage(short nState, VARIANT_BOOL bChecked, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemBackImage(short nState, VARIANT_BOOL bChecked, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemBackColor(short nState, VARIANT_BOOL bChecked, OLE_COLOR clrItemBack, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemBackColor(short nState, VARIANT_BOOL bChecked, OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemGraphic(long nIndex, short nState, VARIANT_BOOL bChecked, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemGraphic(long nIndex, short nState, VARIANT_BOOL bChecked, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTextStyle(short nState, VARIANT_BOOL bChecked, struct IDUITextStyle *pTextStyle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTextStyle(short nState, VARIANT_BOOL bChecked, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawBackColor(VARIANT_BOOL bDrawColor  ) = 0;
	virtual HRESULT __stdcall raw_GetDrawBackColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pClrBack, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(short nHeight, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicIconPath(BSTR strFilePath, short nOffsetX, short nOffsetY, short nCount, VARIANT_BOOL bHorz, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicIconHandle(OLE_HANDLE hIcon, short nOffsetX, short nOffsetY, short nCount, VARIANT_BOOL bHorz, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetNcBorder(struct SkinRect *pRcBorder  ) = 0;
	virtual HRESULT __stdcall raw_GetNcBorder(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_Create(OLE_HANDLE hParent, long nStyle, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_IsShow(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DoMouseWheel(long wParam, long lParam  ) = 0;
	virtual HRESULT __stdcall raw_SetAnimateType(enum DUI_PSLANIMATETYPE eType  ) = 0;
	virtual HRESULT __stdcall raw_GetAnimateType(enum DUI_PSLANIMATETYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAnimateSpeed(int nSpeed  ) = 0;
	virtual HRESULT __stdcall raw_GetAnimateSpeed(int *pResult) = 0;
	virtual HRESULT __stdcall raw_AddOwnerCtrl(struct IDUIControlBase *pOwnerCtrl  ) = 0;
	virtual HRESULT __stdcall raw_RemoveOwnerCtrl(struct IDUIControlBase *pOwnerCtrl, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOwnerCtrl(struct IDUIControlBase ***pOwnerCtrl, short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetActiveOwnerCtrl(struct IDUIControlBase *pOwnerCtrl  ) = 0;
	virtual HRESULT __stdcall raw_GetActiveOwnerCtrl(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SelectNextItem(VARIANT_BOOL bNext, struct PSLItem *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemIconByImgBase(long nIndex, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemIconByIcon(long nIndex, OLE_HANDLE hIcon, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemIconByPath(long nIndex, BSTR strPath, OLE_COLOR clrTrans, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemImageIndex(long nIndex, long nImageIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageList(OLE_HANDLE hImageList, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconSize(struct SkinSize *pSknsize  ) = 0;
	virtual HRESULT __stdcall raw_GetIconSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetShowIcon(VARIANT_BOOL bShowIcon  ) = 0;
	virtual HRESULT __stdcall raw_IsShowIcon(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSupportPerPixel(VARIANT_BOOL bSupportPerPixel  ) = 0;
	virtual HRESULT __stdcall raw_IsSupportPerPixel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconOffset(short nOffsetX, short nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_GetIconOffset(short *pnOffsetX, short *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_Test(struct TestStruct *pTestStruct  ) = 0;
	virtual HRESULT __stdcall raw_GetTest(struct TestStruct *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderType(enum DUI_RENDERENGINE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderType(enum DUI_RENDERENGINE_TYPE eRenderType  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItemByOwnerCtrl(struct IDUIControlBase *pOwnerCtrl, VARIANT_BOOL *pbResult  ) = 0;
	virtual HRESULT __stdcall raw_GetItemTooltip(long nIndex, BSTR *pstrText, BSTR *pstrShortcut, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTooltip(long nIndex, BSTR strText, BSTR strShortcut, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	long  AddItem(tstring  strName, tstring  strText, tstring  strShortcut, long  nImageIndex = -1  );
	long  InsertItem(long  nIndex, tstring  strName, tstring  strText, tstring  strShortcut, long  nImageIndex = -1  );
	BOOL  GetItemText(long  nIndex, BSTR * pstrText, BSTR * pstrShortcut  );
	BOOL  SetItemText(long  nIndex, tstring  strText, tstring  strShortcut  );
	BOOL  GetItemTextByName(tstring  strName, BSTR * pstrText, BSTR * pstrShortcut  );
	BOOL  SetItemTextByName(tstring  strName, tstring  strText, tstring  strShortcut  );
	long  GetItemCount();
	struct PSLItem  GetItem(long  nIndex  );
	BOOL  SetItem(long  nIndex, struct PSLItem * pItem  );
	long  GetCurrentItem();
	BOOL  SetCurrentItem(long  nIndex  );
	BOOL  SetItemData(long  nIndex, OLE_HANDLE  hData  );
	OLE_HANDLE  GetItemData(long  nIndex  );
	tstring  GetItemName(long  nIndex  );
	long  GetItemIndex(tstring  strName  );
	void SetWinPos(short  x, short  y  );
	void SetListWidth(short  nWidth  );
	short  GetListWidth();
	void SetListHeight(short  nHeight  );
	short  GetListHeight();
	void SetListMaxHeight(short  nMaxHeight  );
	short  GetListMaxHeight();
	BOOL  RemoveItem(long  nIndex  );
	BOOL  RemoveItemByName(tstring  strName  );
	BOOL  RemoveAll();
	BOOL  Show(BOOL  bShow  );
	OLE_HANDLE  GetHandle();
	void SetDrawItemColor(BOOL  bDrawColor  );
	BOOL  GetDrawItemColor();
	BOOL  SetItemBackImage(short  nState, BOOL  bChecked, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetItemBackImage(short  nState, BOOL  bChecked  );
	BOOL  SetItemBackColor(short  nState, BOOL  bChecked, OLE_COLOR  clrItemBack  );
	OLE_COLOR  GetItemBackColor(short  nState, BOOL  bChecked  );
	BOOL  SetItemGraphic(long  nIndex, short  nState, BOOL  bChecked, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetItemGraphic(long  nIndex, short  nState, BOOL  bChecked  );
	BOOL  SetItemTextStyle(short  nState, BOOL  bChecked, struct IDUITextStyle * pTextStyle  );
	struct IDUITextStyle * GetItemTextStyle(short  nState, BOOL  bChecked  );
	void SetDrawBackColor(BOOL  bDrawColor  );
	BOOL  GetDrawBackColor();
	BOOL  SetBackImage(struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetBackImage();
	BOOL  SetBackColor(struct IFillColor * pClrBack  );
	struct IFillColor * GetBackColor();
	BOOL  SetItemHeight(short  nHeight  );
	short  GetItemHeight();
	BOOL  SetGraphicIconPath(tstring  strFilePath, short  nOffsetX, short  nOffsetY, short  nCount, BOOL  bHorz  );
	BOOL  SetGraphicIconHandle(OLE_HANDLE  hIcon, short  nOffsetX, short  nOffsetY, short  nCount, BOOL  bHorz  );
	void SetNcBorder(struct SkinRect * pRcBorder  );
	struct SkinRect  GetNcBorder();
	OLE_HANDLE  Create(OLE_HANDLE  hParent, long  nStyle  );
	BOOL  IsShow();
	void DoMouseWheel(long  wParam, long  lParam  );
	void SetAnimateType(enum DUI_PSLANIMATETYPE  eType  );
	enum DUI_PSLANIMATETYPE  GetAnimateType();
	void SetAnimateSpeed(int  nSpeed  );
	int  GetAnimateSpeed();
	void AddOwnerCtrl(struct IDUIControlBase * pOwnerCtrl  );
	BOOL  RemoveOwnerCtrl(struct IDUIControlBase * pOwnerCtrl  );
	short  GetOwnerCtrl(struct IDUIControlBase *** pOwnerCtrl  );
	void SetActiveOwnerCtrl(struct IDUIControlBase * pOwnerCtrl  );
	struct IDUIControlBase * GetActiveOwnerCtrl();
	struct PSLItem  SelectNextItem(BOOL  bNext  );
	BOOL  SetItemIconByImgBase(long  nIndex, struct IDUIImageBase * pImageBase  );
	BOOL  SetItemIconByIcon(long  nIndex, OLE_HANDLE  hIcon  );
	BOOL  SetItemIconByPath(long  nIndex, tstring  strPath, OLE_COLOR  clrTrans  );
	BOOL  SetItemImageIndex(long  nIndex, long  nImageIndex  );
	BOOL  SetImageList(OLE_HANDLE  hImageList  );
	void SetIconSize(struct SkinSize * pSknsize  );
	struct SkinSize  GetIconSize();
	void SetShowIcon(BOOL  bShowIcon  );
	BOOL  IsShowIcon();
	void SetSupportPerPixel(BOOL  bSupportPerPixel  );
	BOOL  IsSupportPerPixel();
	void SetIconOffset(short  nOffsetX, short  nOffsetY  );
	void GetIconOffset(short * pnOffsetX, short * pnOffsetY  );
	void Test(struct TestStruct * pTestStruct  );
	struct TestStruct  GetTest();
	enum DUI_RENDERENGINE_TYPE  GetRenderType();
	void SetRenderType(enum DUI_RENDERENGINE_TYPE  eRenderType  );
	void RemoveAllItemByOwnerCtrl(struct IDUIControlBase * pOwnerCtrl, VARIANT_BOOL * pbResult  );
	BOOL  GetItemTooltip(long  nIndex, BSTR * pstrText, BSTR * pstrShortcut  );
	BOOL  SetItemTooltip(long  nIndex, tstring  strText, tstring  strShortcut  );
};

struct __declspec(uuid("4fe4a7f0-5b64-48f2-8988-cbdb289cae65")) PSLItem
{
	BSTR 	strName;
	BSTR 	strText;
	BSTR 	strShortcut;
	unsigned int 	hData;
	long 	nIndex;
	unsigned int 	pPrev;
	unsigned int 	pNext;
	IDispatch *	pDispatch;
};

enum DUI_PSLANIMATETYPE
{ 
	DUI_PSLANI_BLEND = 2,
	DUI_PSLANI_NORMAL = 0,
	DUI_PSLANI_SLIDE = 1 
};

enum DUI_EDIT_MESSAGE
{ 
	DUI_EDIT_CHANGE = 9507,
	DUI_EDIT_KILLFOCUS = 9510,
	DUI_EDIT_PRERETURN = 9512,
	DUI_EDIT_RBUTTONUP = 9511,
	DUI_EDIT_SETFOCUS = 9509,
	DUI_EDIT_UPDATE = 9508 
};

struct __declspec(uuid("5856e73f-0f1c-48cd-8891-4fc8c1e0f618")) _IDUIEditCtrlEvents : IDispatch
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

struct __declspec(uuid("b260d36a-f8bc-4063-9803-04f10cc50caf")) IDUIEditCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetPassword(VARIANT_BOOL bPassword  ) = 0;
	virtual HRESULT __stdcall raw_IsPassword(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetReadOnly(VARIANT_BOOL bReadOnly  ) = 0;
	virtual HRESULT __stdcall raw_IsReadOnly(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextLength(long *pResult) = 0;
	virtual HRESULT __stdcall raw_Clear() = 0;
	virtual HRESULT __stdcall raw_Copy() = 0;
	virtual HRESULT __stdcall raw_Cut() = 0;
	virtual HRESULT __stdcall raw_Paste() = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetSel(long *pStartPos, long *pEndPos  ) = 0;
	virtual HRESULT __stdcall raw_SetSel(long StartPos, long EndPos, VARIANT_BOOL bNoScroll  ) = 0;
	virtual HRESULT __stdcall raw_SetTextLimit(long TextLimit  ) = 0;
	virtual HRESULT __stdcall raw_SetEditFocus() = 0;
	virtual HRESULT __stdcall raw_KillEditFocus() = 0;
	virtual HRESULT __stdcall raw_SetDefaultText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetHotKey(long *pHotKey  ) = 0;
	virtual HRESULT __stdcall raw_SetHotKey(short VirtualKeyCode, short Modifiers  ) = 0;
	virtual HRESULT __stdcall raw_SetNumberOnly(VARIANT_BOOL bNumberOnly  ) = 0;
	virtual HRESULT __stdcall raw_IsActive(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextFilterFun(OLE_HANDLE lpCmdFun  ) = 0;
	virtual HRESULT __stdcall raw_GetTextRenderHint(enum DUI_EDIT_RENDER_HINT *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextRenderHint(enum DUI_EDIT_RENDER_HINT eRenderHint  ) = 0;
	virtual HRESULT __stdcall raw_SetTextEvent(BSTR strText, VARIANT_BOOL bEvent  ) = 0;
	virtual HRESULT __stdcall raw_SetHotKeyDefaultText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetHotKeyDefaultText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnableCopy(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetEnablePaste(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetEnableCut(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_GetEnableCopy(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetEnablePaste(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetEnableCut(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableEditMenu(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_GetEnableEditMenu(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnableDelete(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_GetEnableDelete(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableREAutoResize(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetREAutoResizeBorder(long nMinWidth, long nMinHeight, long nMxnWidth, long nMaxHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(struct IDUITextStyle *pTextStyle, enum DUI_EDIT_STATE eState  ) = 0;

	//
	//Method Wrapper
	//
	void SetPassword(BOOL  bPassword  );
	BOOL  IsPassword();
	void SetReadOnly(BOOL  bReadOnly  );
	BOOL  IsReadOnly();
	long  GetTextLength();
	void Clear();
	void Copy();
	void Cut();
	void Paste();
	tstring  GetText();
	void SetText(tstring  strText  );
	void GetSel(long * pStartPos, long * pEndPos  );
	void SetSel(long  StartPos, long  EndPos, BOOL  bNoScroll = FALSE  );
	void SetTextLimit(long  TextLimit  );
	void SetEditFocus();
	void KillEditFocus();
	void SetDefaultText(tstring  strText  );
	void GetHotKey(long * pHotKey  );
	void SetHotKey(short  VirtualKeyCode, short  Modifiers  );
	void SetNumberOnly(BOOL  bNumberOnly  );
	BOOL  IsActive();
	void SetTextFilterFun(OLE_HANDLE  lpCmdFun  );
	enum DUI_EDIT_RENDER_HINT  GetTextRenderHint();
	void SetTextRenderHint(enum DUI_EDIT_RENDER_HINT  eRenderHint  );
	void SetTextEvent(tstring  strText, BOOL  bEvent = FALSE  );
	void SetHotKeyDefaultText(tstring  strText  );
	tstring  GetHotKeyDefaultText();
	void SetEnableCopy(BOOL  bEnable  );
	void SetEnablePaste(BOOL  bEnable  );
	void SetEnableCut(BOOL  bEnable  );
	BOOL  GetEnableCopy();
	BOOL  GetEnablePaste();
	BOOL  GetEnableCut();
	void EnableEditMenu(BOOL  bEnable  );
	BOOL  GetEnableEditMenu();
	void SetEnableDelete(BOOL  bEnable  );
	BOOL  GetEnableDelete();
	void EnableREAutoResize(BOOL  bEnable  );
	void SetREAutoResizeBorder(long  nMinWidth, long  nMinHeight, long  nMxnWidth, long  nMaxHeight  );
	void SetTextStyle(struct IDUITextStyle * pTextStyle, enum DUI_EDIT_STATE  eState  );
};

enum DUI_EDIT_RENDER_HINT
{ 
	TEXT_RENDERING_HINT_ANTIALIAS = 4,
	TEXT_RENDERING_HINT_ANTIALIASGRIDFIT = 3,
	TEXT_RENDERING_HINT_CLEARTYPEGRIDFIT = 5,
	TEXT_RENDERING_HINT_SINGLEBITPERPIXEL = 2,
	TEXT_RENDERING_HINT_SINGLEBITPERPIXELGRIDFIT = 1,
	TEXT_RENDERING_HINT_SYSTEMDEFAULT = 0 
};

enum DUI_EDIT_STATE
{ 
	DUI_EDIT_DISABLE = 3,
	DUI_EDIT_FOCUS = 2,
	DUI_EDIT_HOT = 1,
	DUI_EDIT_LAST = 4,
	DUI_EDIT_NORMAL = 0 
};

enum DUI_HEADERCTRL_TYPE
{ 
	DUI_HEADER_DIVIDER = 1,
	DUI_HEADER_ITEM = 0 
};

enum DUI_HEADERCTRL_NOTIFY
{ 
	DUI_HEADERCTR_CHECKBOX = 2997,
	DUI_HEADERCTR_ITEMDRAG = 2993,
	DUI_HEADERCTR_ITEMMOVE = 2992,
	DUI_HEADERCTR_LBUTTONDOWN = 2994,
	DUI_HEADERCTR_LBUTTONUP = 2995,
	DUI_HEADERCTR_SORT = 2996 
};

struct __declspec(uuid("ba6cf79d-3511-48eb-99ba-99c8730ecf02")) _IDUIHeaderCtrlEvents : IDispatch
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

struct __declspec(uuid("3ef5ca57-d800-4d21-acda-018c48ec1dda")) IDUIHeaderCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetDrawBackColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawBackColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **ppFillColor  ) = 0;
	virtual HRESULT __stdcall raw_SetItemImage(enum DUIHADER_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemImage(enum DUIHADER_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemColor(enum DUIHADER_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemColor(enum DUIHADER_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTextStyle(enum DUIHADER_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTextStyle(enum DUIHADER_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetSupportDrag(VARIANT_BOOL bCanDrag, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsCanDrag(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItem(short nPos, BSTR strText, short nWidth, short *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteItem(short nPos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOwnerCtrl(struct IDUIControlBase *pOwnerCtrl  ) = 0;
	virtual HRESULT __stdcall raw_GetOwnerCtrl(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawItemColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawItemColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDividerColor(OLE_COLOR clrDivider, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDividerColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollPos(long nPos, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetScrollPos(long *plResult  ) = 0;
	virtual HRESULT __stdcall raw_SetShowSortIcon(VARIANT_BOOL bShowSortIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetShowSortIcon(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemSort(short nIndex, enum DUI_HEADERCTRL_SORT eSortType, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetCurSortItem(short *pnResult, enum DUI_HEADERCTRL_SORT *peResult  ) = 0;
	virtual HRESULT __stdcall raw_SetItemWidth(short nIndex, short nWidth, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetItemCheckState(short nIndex, enum DUICHECKBOX_VALUE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemCheckState(short nIndex, enum DUICHECKBOX_VALUE eState  ) = 0;
	virtual HRESULT __stdcall raw_ShowItemCheckBox(short nIndex, VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_DragDrogItem(short nDradForm, short nDrawTo  ) = 0;
	virtual HRESULT __stdcall raw_SetTextAlignType(short nIndex, enum DUI_HEADERCTRL_ALIGNTYPE eType  ) = 0;
	virtual HRESULT __stdcall raw_SetHeadCheckValue(long eCheck, short nIndex  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetDrawBackColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawBackColor();
	BOOL  SetBackImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetBackImage();
	BOOL  SetBackColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	void GetBackColor(struct IFillColor ** ppFillColor  );
	BOOL  SetItemImage(enum DUIHADER_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetItemImage(enum DUIHADER_STATE  eState  );
	BOOL  SetItemColor(enum DUIHADER_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetItemColor(enum DUIHADER_STATE  eState  );
	BOOL  SetItemTextStyle(enum DUIHADER_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetItemTextStyle(enum DUIHADER_STATE  eState  );
	BOOL  SetSupportDrag(BOOL  bCanDrag  );
	BOOL  GetIsCanDrag();
	short  InsertItem(short  nPos, tstring  strText, short  nWidth  );
	BOOL  DeleteItem(short  nPos  );
	short  GetItemCount();
	void SetOwnerCtrl(struct IDUIControlBase * pOwnerCtrl  );
	struct IDUIControlBase * GetOwnerCtrl();
	BOOL  SetDrawItemColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawItemColor();
	BOOL  SetDividerColor(OLE_COLOR  clrDivider  );
	OLE_COLOR  GetDividerColor();
	void SetScrollPos(long  nPos, BOOL  bRedraw  );
	void GetScrollPos(long * plResult  );
	void SetShowSortIcon(BOOL  bShowSortIcon  );
	BOOL  GetShowSortIcon();
	void SetItemSort(short  nIndex, enum DUI_HEADERCTRL_SORT  eSortType, BOOL  bRedraw  );
	void GetCurSortItem(short * pnResult, enum DUI_HEADERCTRL_SORT * peResult  );
	void SetItemWidth(short  nIndex, short  nWidth, BOOL  bRedraw  );
	enum DUICHECKBOX_VALUE  GetItemCheckState(short  nIndex  );
	void SetItemCheckState(short  nIndex, enum DUICHECKBOX_VALUE  eState  );
	void ShowItemCheckBox(short  nIndex, BOOL  bShow  );
	void DragDrogItem(short  nDradForm, short  nDrawTo  );
	void SetTextAlignType(short  nIndex, enum DUI_HEADERCTRL_ALIGNTYPE  eType  );
	void SetHeadCheckValue(long  eCheck, short  nIndex  );
};

enum DUIHADER_STATE
{ 
	DUIHADER_STATE_DISABLED = 3,
	DUIHADER_STATE_HOT = 1,
	DUIHADER_STATE_LAST = 4,
	DUIHADER_STATE_NORMAL = 0,
	DUIHADER_STATE_PRESS = 2 
};

enum DUI_HEADERCTRL_SORT
{ 
	DUI_HEADER_ASC = 0,
	DUI_HEADER_DESC = 1 
};

enum DUI_HEADERCTRL_ALIGNTYPE
{ 
	DUI_HEADERCTRL_CENTER = 1,
	DUI_HEADERCTRL_LEFT = 0,
	DUI_HEADERCTRL_NORMAL = 3,
	DUI_HEADERCTRL_RIGHT = 2 
};

struct __declspec(uuid("9cd9834b-7fc2-4770-ac28-5de39e6ebc93")) _IDUItemContainerEvents : IDispatch
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

struct __declspec(uuid("6cc4878d-d2e9-490a-b465-df4404e1624a")) IDUItemContainer : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_IsChecked(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetChecked(VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUI_ITEMCSTATE eState, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUI_ITEMCSTATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(enum DUI_ITEMCSTATE eState, long bCheck, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(enum DUI_ITEMCSTATE eState, long bCheck, struct IDUIImageBase **pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  IsChecked();
	void SetChecked(BOOL  bCheck  );
	void SetState(enum DUI_ITEMCSTATE  eState, BOOL  bRedraw  );
	enum DUI_ITEMCSTATE  GetState();
	void SetBackImage(enum DUI_ITEMCSTATE  eState, long  bCheck, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetBackImage(enum DUI_ITEMCSTATE  eState, long  bCheck  );
};

enum DUI_ITEMCSTATE
{ 
	DUI_ITEMC_DISABLE = 2,
	DUI_ITEMC_HOT = 3,
	DUI_ITEMC_LAST = 4,
	DUI_ITEMC_NORMAL = 0,
	DUI_ITEMC_PRESS = 1 
};

enum DUILV_STYLE
{ 
	DUILVS_CUSTOM = 4,
	DUILVS_ICON = 1,
	DUILVS_LAST = 5,
	DUILVS_LIST = 0,
	DUILVS_REPORT = 3,
	DUILVS_SMALLICON = 2 
};

enum DUI_LVMSGID
{ 
	DUILV_NOTIFY = 3200 
};

enum ListViewMsgID
{ 
	DUI_LV_CHANGEHEADERCHECK = 23,
	DUI_LV_CHECKGROUP = 27,
	DUI_LV_CHECKITEM = 20,
	DUI_LV_CUSTOMITEM_CLICK = 11,
	DUI_LV_CUSTOMITEM_MOUSELEAVE = 14,
	DUI_LV_CUSTOMITEM_MOUSEMOVE = 13,
	DUI_LV_DBLBUTTONUP = 6,
	DUI_LV_DRAGITEM = 15,
	DUI_LV_DRAGLBUTTONUP = 25,
	DUI_LV_HEADER_LBUTTONUP = 24,
	DUI_LV_HEADER_SORT = 18,
	DUI_LV_ITEMCHANGE = 8,
	DUI_LV_ITEMCHANGING = 9,
	DUI_LV_ITEMDELETE = 10,
	DUI_LV_ITEMSELCHANGE = 12,
	DUI_LV_LBUTTONDOWN = 3,
	DUI_LV_LBUTTONUP = 2,
	DUI_LV_MOSEMOVE = 1,
	DUI_LV_MOUSELEAVE = 26,
	DUI_LV_RBUTTONDOWN = 5,
	DUI_LV_RBUTTONUP = 4,
	DUI_LV_STYLECHANGE = 7,
	DUI_LV_UNCHECKITEM = 21,
	DUI_LV_UNITITEM_CLICK = 16,
	DUI_LV_UNITITEM_DBLCLICK = 17,
	DUI_LV_UPDATEITEM = 22,
	DUI_LV_VSCROLL = 19 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUILVNotifyInfo
{
	enum ListViewMsgID 	eDUILVMsgId;
	OLE_HANDLE 	lParam1;
	OLE_HANDLE 	lParam2;
	OLE_HANDLE 	lParam3;
	OLE_HANDLE 	lParam4;
	OLE_HANDLE 	lParam5;
};

struct __declspec(uuid("12d6f2ff-b95c-4096-ac78-4e543e39e6ac")) _IDUIListViewEvents : IDispatch
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

struct __declspec(uuid("8c487988-d98b-4ace-8cfb-a3eab58f71e8")) IDUIListView : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetListType(enum DUILV_STYLE eListType, VARIANT_BOOL bRedraw, VARIANT_BOOL *pbResult  ) = 0;
	virtual HRESULT __stdcall raw_GetListType(enum DUILV_STYLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawBackColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsDrawBackColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawItemColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsDrawItemColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemWidth(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemDefImage(enum DUILVI_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemDefImage(enum DUILVI_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemDefColor(enum DUILVI_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemDefColor(enum DUILVI_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemSpace(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemSpace(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollSize(long nSize  ) = 0;
	virtual HRESULT __stdcall raw_GetScrollSize(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLeftScroll(VARIANT_BOOL bLeftScroll  ) = 0;
	virtual HRESULT __stdcall raw_IsLeftScroll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItem(long nItem, BSTR szItem, long nID, VARIANT_BOOL bRefresh, short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetObject(BSTR strParent, BSTR strName, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetListModel(struct IDUIControlBase *pUIForm  ) = 0;
	virtual HRESULT __stdcall raw_SetItemImage(long nItem, enum DUILVI_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemImage(long nItem, enum DUILVI_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemColor(long nItem, enum DUILVI_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemColor(long nItem, enum DUILVI_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteItem(long nItem  ) = 0;
	virtual HRESULT __stdcall raw_DeleteAllItems() = 0;
	virtual HRESULT __stdcall raw_SetItemText(long nItem, short iSubItem, BSTR szItem, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemText(long nItem, short iSubItem, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemData(long nItem, OLE_HANDLE hData, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemData(long nItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemRect(long nItem, struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemGraphic(long nItem, enum DUILVI_STATE eState, OLE_HANDLE hBitmap, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemGraphic(long nItem, enum DUILVI_STATE eState, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetControlID(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetControlID(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetUseScrollBar(VARIANT_BOOL bUseScrollBar  ) = 0;
	virtual HRESULT __stdcall raw_IsUserScrollBar(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RefreshView() = 0;
	virtual HRESULT __stdcall raw_GetResObject(long nItem, BSTR strName, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeaderCtrl(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertColumn(short nCol, BSTR strText, short nWidth, struct IDUILVColumn **pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteColumn(short nCol, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetColumn(short nCol, struct IDUILVColumn **pResult) = 0;
	virtual HRESULT __stdcall raw_IsDrawGrid(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawGrid(VARIANT_BOOL bDrawGrid  ) = 0;
	virtual HRESULT __stdcall raw_AppendItemText(long nItem, short iSubItem, BSTR szItem, BSTR szURL, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendImage(long nItem, short iSubItem, BSTR szImagePath, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetUnitItemStaticTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_GetUnitItemUrlTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetUnitItemStaticTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle *ppTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetUnitItem(long nRow, short nCol, struct IDUIUnitItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetUnitItemUrlTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle *ppTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsAutoResizeItemHeight(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoResizeItemHeight(VARIANT_BOOL bResult  ) = 0;
	virtual HRESULT __stdcall raw_GetSelItem(struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_AddGroup(long nID, BSTR strName, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllGroup() = 0;
	virtual HRESULT __stdcall raw_GetGroupByName(BSTR strName, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupByID(long nID, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetShowGroup(VARIANT_BOOL bShow, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetShowGroup(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUITVItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_SetAutoAdjustIcon(VARIANT_BOOL bAutoAdjust  ) = 0;
	virtual HRESULT __stdcall raw_IsAutoAdjustIcon(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconAdjustSize(long nWidth, long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetIconAdjustSize(long *pnWidth, long *pnHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetIconOffset(long nOffsetX, long nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_GetIconOffset(long *pnOffsetX, long *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_SetSupportMultiSel(VARIANT_BOOL bMutilSel  ) = 0;
	virtual HRESULT __stdcall raw_IsSupportMultiSel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelItemCount(long *pnResult  ) = 0;
	virtual HRESULT __stdcall raw_GetFirstSelItem(struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextSelItem(struct IDUITVItemBase *pItem, struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertGroup(long nIndex, long nID, BSTR strName, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_SortItems(OLE_HANDLE lpCmdFun, struct IDUITVItemGroup *pParentItem, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_SetShowText(VARIANT_BOOL bShowText, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsShowText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelItem(struct IDUITVItemBase *pItemBase, VARIANT_BOOL bChangePos  ) = 0;
	virtual HRESULT __stdcall raw_GetItem(BSTR strName, struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(long nIndex, struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_IsDragable(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableDragable(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_IsDragByPostMsg(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDragByPostMsg(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_IsExpendByIcon(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetExpendByIcon(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetSupportGroup(VARIANT_BOOL bSupportGroup  ) = 0;
	virtual HRESULT __stdcall raw_IsSupportGroup(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_VScroll(long nScrollSize, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetVScrollPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetListModel(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckBoxStyle(VARIANT_BOOL bHasCheckBox, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetCheckBoxStyle(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCheckItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFirstCheckItem(struct IDUITVItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextCheckItem(struct IDUITVItem *pItem, struct IDUITVItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckItem(struct IDUITVItem *pItem, VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_SetColumnUserModule(int nCol, struct IDUIControlBase *pIControlBaseModule, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetColumnUserModule(int nCol, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCtrlBase(long nRow, short nCol, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetLastVisibleItem(struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetMultiSelItem(struct IDUITVItemBase *pItemBase, VARIANT_BOOL bAutoCancelSel  ) = 0;
	virtual HRESULT __stdcall raw_SetUserModulePosition(int nCol, int nOffsetX, int nOffsetY, int nRightMargin, int nHeight  ) = 0;
	virtual HRESULT __stdcall raw_CanExpandGroup(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAllItemCheck(VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_ReDraw() = 0;
	virtual HRESULT __stdcall raw_IsCustomClickOnly(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCustomClickOnly(VARIANT_BOOL bResult  ) = 0;
	virtual HRESULT __stdcall raw_SwapCol(long nIndex1, long nIndex2, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemState(long nRow, enum DUILVI_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_StartMultiSel(VARIANT_BOOL bStartMulti  ) = 0;
	virtual HRESULT __stdcall raw_IsStartMultiSel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendImageByHBitmap(long nItem, short iSubItem, OLE_HANDLE hBitmap, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendImageByHIcon(long nItem, short iSubItem, OLE_HANDLE hIcon, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGroupHeight(long lHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetGroupHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SelectAllItem(VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_UnSelectAllItem(VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_GetListViewNofiyInfo(OLE_HANDLE hInfo, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVerSpace(long nSize  ) = 0;
	virtual HRESULT __stdcall raw_GetVisibleCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollBar(OLE_HANDLE pScrollBar  ) = 0;
	virtual HRESULT __stdcall raw_IsDrawVerGrid(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIconRowCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetUseRollOver(VARIANT_BOOL bRollOver  ) = 0;
	virtual HRESULT __stdcall raw_IsUseRollOver(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ScrollOver(VARIANT_BOOL bTop  ) = 0;
	virtual HRESULT __stdcall raw_GetExternalScrollBar(struct IDUIScrollBar **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByID(long nID, struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDblClkHighPriority(VARIANT_BOOL bHigh  ) = 0;
	virtual HRESULT __stdcall raw_GetDblClkHighPriority(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemEnable(long nIndex, VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetBottomExtent(long nExtent  ) = 0;
	virtual HRESULT __stdcall raw_GetBottomExtent(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SwapItem(struct IDUITVItemBase *pItem, struct IDUITVItemBase *pOtherItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVirListItemsNum(long nNum  ) = 0;
	virtual HRESULT __stdcall raw_SetUseVirList(VARIANT_BOOL bUse  ) = 0;
	virtual HRESULT __stdcall raw_SetUseVirGroupList(VARIANT_BOOL bUse  ) = 0;
	virtual HRESULT __stdcall raw_SetVirGroupNum(long nNum, struct IDUITVItemGroup *pParent  ) = 0;
	virtual HRESULT __stdcall raw_SetVirSonItemNum(long nNum, struct IDUITVItemGroup *pParent  ) = 0;
	virtual HRESULT __stdcall raw_SetAutoDrop(VARIANT_BOOL bAutoDrop  ) = 0;
	virtual HRESULT __stdcall raw_SetHorScrollBar(OLE_HANDLE pScrollBar  ) = 0;
	virtual HRESULT __stdcall raw_RefreshVirGroup() = 0;
	virtual HRESULT __stdcall raw_SetDragingHoverItemHot(VARIANT_BOOL bNeed  ) = 0;
	virtual HRESULT __stdcall raw_SetDragingHoverGroupHot(VARIANT_BOOL bNeed  ) = 0;
	virtual HRESULT __stdcall raw_ExpandAllTopVirGroup(VARIANT_BOOL bExpand  ) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItemIDList(struct DUILV_IDPAIR **ppIdPair, long *pResult) = 0;
	virtual HRESULT __stdcall raw_VirGroupVScroll(long nDistance  ) = 0;
	virtual HRESULT __stdcall raw_UpdateVirtualListData() = 0;

	//
	//Method Wrapper
	//
	void SetListType(enum DUILV_STYLE  eListType, BOOL  bRedraw, VARIANT_BOOL * pbResult  );
	enum DUILV_STYLE  GetListType();
	BOOL  SetDrawBackColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  IsDrawBackColor();
	BOOL  SetBackImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetBackImage();
	BOOL  SetBackColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetBackColor();
	BOOL  SetDrawItemColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  IsDrawItemColor();
	BOOL  SetItemHeight(short  nValue, BOOL  bRedraw  );
	short  GetItemHeight();
	BOOL  SetItemWidth(short  nValue, BOOL  bRedraw  );
	short  GetItemWidth();
	BOOL  SetItemDefImage(enum DUILVI_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetItemDefImage(enum DUILVI_STATE  eState  );
	BOOL  SetItemDefColor(enum DUILVI_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetItemDefColor(enum DUILVI_STATE  eState  );
	BOOL  SetTextStyle(enum DUILVI_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetTextStyle(enum DUILVI_STATE  eState  );
	BOOL  SetItemSpace(short  nValue, BOOL  bRedraw  );
	short  GetItemSpace();
	void SetScrollSize(long  nSize  );
	long  GetScrollSize();
	void SetLeftScroll(BOOL  bLeftScroll  );
	BOOL  IsLeftScroll();
	short  InsertItem(long  nItem, tstring  szItem, long  nID, BOOL  bRefresh  );
	struct IDUIControlBase * GetObject(tstring  strParent, tstring  strName  );
	void SetListModel(struct IDUIControlBase * pUIForm  );
	BOOL  SetItemImage(long  nItem, enum DUILVI_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetItemImage(long  nItem, enum DUILVI_STATE  eState  );
	BOOL  SetItemColor(long  nItem, enum DUILVI_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetItemColor(long  nItem, enum DUILVI_STATE  eState  );
	long  GetItemCount();
	void DeleteItem(long  nItem  );
	void DeleteAllItems();
	BOOL  SetItemText(long  nItem, short  iSubItem, tstring  szItem, BOOL  bRedraw  );
	tstring  GetItemText(long  nItem, short  iSubItem  );
	BOOL  SetItemData(long  nItem, OLE_HANDLE  hData  );
	OLE_HANDLE  GetItemData(long  nItem  );
	struct SkinRect  GetItemRect(long  nItem  );
	BOOL  SetItemGraphic(long  nItem, enum DUILVI_STATE  eState, OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetItemGraphic(long  nItem, enum DUILVI_STATE  eState  );
	void SetControlID(short  nIndex  );
	short  GetControlID();
	void SetUseScrollBar(BOOL  bUseScrollBar  );
	BOOL  IsUserScrollBar();
	void RefreshView();
	struct IDUIControlBase * GetResObject(long  nItem, tstring  strName  );
	struct IDUIControlBase * GetHeaderCtrl();
	struct IDUILVColumn * InsertColumn(short  nCol, tstring  strText, short  nWidth  );
	BOOL  DeleteColumn(short  nCol  );
	struct IDUILVColumn * GetColumn(short  nCol  );
	BOOL  IsDrawGrid();
	void SetDrawGrid(BOOL  bDrawGrid  );
	BOOL  AppendItemText(long  nItem, short  iSubItem, tstring  szItem, tstring  szURL, BOOL  bRedraw  );
	BOOL  AppendImage(long  nItem, short  iSubItem, tstring  szImagePath, BOOL  bRedraw  );
	struct IDUITextStyle * GetUnitItemStaticTextStyle(enum DUILVI_STATE  eState  );
	struct IDUITextStyle * GetUnitItemUrlTextStyle(enum DUILVI_STATE  eState  );
	BOOL  SetUnitItemStaticTextStyle(enum DUILVI_STATE  eState, struct IDUITextStyle * ppTextStyle, BOOL  bRedraw  );
	struct IDUIUnitItem * GetUnitItem(long  nRow, short  nCol  );
	BOOL  SetUnitItemUrlTextStyle(enum DUILVI_STATE  eState, struct IDUITextStyle * ppTextStyle, BOOL  bRedraw  );
	BOOL  IsAutoResizeItemHeight();
	void SetAutoResizeItemHeight(BOOL  bResult  );
	struct IDUITVItemBase * GetSelItem();
	struct IDUITVItemGroup * AddGroup(long  nID, tstring  strName  );
	BOOL  RemoveGroupByID(long  nID  );
	BOOL  RemoveGroupByName(tstring  strName  );
	void RemoveAllGroup();
	struct IDUITVItemGroup * GetGroupByName(tstring  strName  );
	struct IDUITVItemGroup * GetGroupByID(long  nID  );
	long  GetGroupCount();
	BOOL  SetShowGroup(BOOL  bShow, BOOL  bRedraw  );
	BOOL  GetShowGroup();
	void RemoveItem(struct IDUITVItem * pItem  );
	void SetAutoAdjustIcon(BOOL  bAutoAdjust  );
	BOOL  IsAutoAdjustIcon();
	void SetIconAdjustSize(long  nWidth, long  nHeight  );
	void GetIconAdjustSize(long * pnWidth, long * pnHeight  );
	void SetIconOffset(long  nOffsetX, long  nOffsetY  );
	void GetIconOffset(long * pnOffsetX, long * pnOffsetY  );
	void SetSupportMultiSel(BOOL  bMutilSel  );
	BOOL  IsSupportMultiSel();
	void GetSelItemCount(long * pnResult  );
	struct IDUITVItemBase * GetFirstSelItem();
	struct IDUITVItemBase * GetNextSelItem(struct IDUITVItemBase * pItem  );
	struct IDUITVItemGroup * InsertGroup(long  nIndex, long  nID, tstring  strName  );
	void SortItems(OLE_HANDLE  lpCmdFun, struct IDUITVItemGroup * pParentItem, BOOL  bRefresh  );
	void SetShowText(BOOL  bShowText, BOOL  bRedraw  );
	BOOL  IsShowText();
	void SetSelItem(struct IDUITVItemBase * pItemBase, BOOL  bChangePos  );
	struct IDUITVItemBase * GetItem(tstring  strName  );
	struct IDUITVItemBase * GetAt(long  nIndex  );
	BOOL  IsDragable();
	void EnableDragable(BOOL  bEnable  );
	BOOL  IsDragByPostMsg();
	void SetDragByPostMsg(BOOL  bEnable  );
	BOOL  IsExpendByIcon();
	void SetExpendByIcon(BOOL  bEnable  );
	void SetSupportGroup(BOOL  bSupportGroup  );
	BOOL  IsSupportGroup();
	BOOL  VScroll(long  nScrollSize  );
	long  GetVScrollPos();
	struct IDUIControlBase * GetListModel();
	void SetCheckBoxStyle(BOOL  bHasCheckBox, BOOL  bRedraw  );
	BOOL  GetCheckBoxStyle();
	long  GetCheckItemCount();
	struct IDUITVItem * GetFirstCheckItem();
	struct IDUITVItem * GetNextCheckItem(struct IDUITVItem * pItem  );
	void SetCheckItem(struct IDUITVItem * pItem, BOOL  bCheck  );
	BOOL  SetColumnUserModule(int  nCol, struct IDUIControlBase * pIControlBaseModule  );
	struct IDUIControlBase * GetColumnUserModule(int  nCol  );
	struct IDUIControlBase * GetItemCtrlBase(long  nRow, short  nCol  );
	struct IDUITVItemBase * GetLastVisibleItem();
	void SetMultiSelItem(struct IDUITVItemBase * pItemBase, BOOL  bAutoCancelSel  );
	void SetUserModulePosition(int  nCol, int  nOffsetX, int  nOffsetY, int  nRightMargin, int  nHeight  );
	BOOL  CanExpandGroup();
	void SetAllItemCheck(BOOL  bCheck  );
	void ReDraw();
	BOOL  IsCustomClickOnly();
	void SetCustomClickOnly(BOOL  bResult  );
	BOOL  SwapCol(long  nIndex1, long  nIndex2  );
	void SetItemState(long  nRow, enum DUILVI_STATE  eState  );
	void StartMultiSel(BOOL  bStartMulti  );
	BOOL  IsStartMultiSel();
	BOOL  AppendImageByHBitmap(long  nItem, short  iSubItem, OLE_HANDLE  hBitmap, BOOL  bRedraw  );
	BOOL  AppendImageByHIcon(long  nItem, short  iSubItem, OLE_HANDLE  hIcon, BOOL  bRedraw  );
	void SetGroupHeight(long  lHeight  );
	long  GetGroupHeight();
	void SelectAllItem(BOOL  bRefresh  );
	void UnSelectAllItem(BOOL  bRefresh  );
	OLE_HANDLE  GetListViewNofiyInfo(OLE_HANDLE  hInfo  );
	void SetVerSpace(long  nSize  );
	long  GetVisibleCount();
	void SetScrollBar(OLE_HANDLE  pScrollBar  );
	BOOL  IsDrawVerGrid();
	long  GetIconRowCount();
	void SetUseRollOver(BOOL  bRollOver  );
	BOOL  IsUseRollOver();
	void ScrollOver(BOOL  bTop  );
	struct IDUIScrollBar * GetExternalScrollBar();
	struct IDUITVItemBase * GetItemByID(long  nID  );
	void SetDblClkHighPriority(BOOL  bHigh  );
	BOOL  GetDblClkHighPriority();
	void SetItemEnable(long  nIndex, BOOL  bEnable  );
	void SetBottomExtent(long  nExtent  );
	long  GetBottomExtent();
	BOOL  SwapItem(struct IDUITVItemBase * pItem, struct IDUITVItemBase * pOtherItem  );
	void SetVirListItemsNum(long  nNum  );
	void SetUseVirList(BOOL  bUse = FALSE  );
	void SetUseVirGroupList(BOOL  bUse = FALSE  );
	void SetVirGroupNum(long  nNum, struct IDUITVItemGroup * pParent = 0  );
	void SetVirSonItemNum(long  nNum, struct IDUITVItemGroup * pParent = 0  );
	void SetAutoDrop(BOOL  bAutoDrop = FALSE  );
	void SetHorScrollBar(OLE_HANDLE  pScrollBar  );
	void RefreshVirGroup();
	void SetDragingHoverItemHot(BOOL  bNeed  );
	void SetDragingHoverGroupHot(BOOL  bNeed  );
	void ExpandAllTopVirGroup(BOOL  bExpand = FALSE  );
	long  GetSelectedItemIDList(struct DUILV_IDPAIR ** ppIdPair  );
	void VirGroupVScroll(long  nDistance  );
	void UpdateVirtualListData();
};

enum DUILVI_STATE
{ 
	DUILVI_STATE_DISABLED = 3,
	DUILVI_STATE_HOT = 1,
	DUILVI_STATE_LAST = 4,
	DUILVI_STATE_NORMAL = 0,
	DUILVI_STATE_SELECTED = 2 
};

struct __declspec(uuid("60b9e5f3-cf6f-448b-b4c4-8c40fe4cc7e6")) IDUILVColumn : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetColumnWidth(short nWidth, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetColumnWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetAlignMode(enum DUILV_UNITITEM_HORZ eHovAlign, enum DUILV_UNITITEM_VERT eVerAlign  ) = 0;
	virtual HRESULT __stdcall raw_GetVerAlignMode(enum DUILV_UNITITEM_VERT *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHorzAlignMode(enum DUILV_UNITITEM_HORZ *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSort(VARIANT_BOOL bSort  ) = 0;
	virtual HRESULT __stdcall raw_GetSort(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetColumnWidth(short  nWidth  );
	short  GetColumnWidth();
	BOOL  SetTextStyle(enum DUILVI_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetTextStyle(enum DUILVI_STATE  eState  );
	void SetAlignMode(enum DUILV_UNITITEM_HORZ  eHovAlign, enum DUILV_UNITITEM_VERT  eVerAlign  );
	enum DUILV_UNITITEM_VERT  GetVerAlignMode();
	enum DUILV_UNITITEM_HORZ  GetHorzAlignMode();
	void SetSort(BOOL  bSort  );
	BOOL  GetSort();
};

enum DUILV_UNITITEM_HORZ
{ 
	UNITITEM_HORZ_CENTER = 1,
	UNITITEM_HORZ_LEFT = 0,
	UNITITEM_HORZ_RIGHT = 2 
};

enum DUILV_UNITITEM_VERT
{ 
	UNITITEM_VERT_BOTTOM = 2,
	UNITITEM_VERT_CENTER = 1,
	UNITITEM_VERT_TOP = 0 
};

struct __declspec(uuid("5e93c67f-3f40-4a3a-ae0d-89934583d937")) IDUIUnitItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AppendStatic(BSTR strText, BSTR strURL  ) = 0;
	virtual HRESULT __stdcall raw_AppendImage(BSTR strImagePath  ) = 0;
	virtual HRESULT __stdcall raw_SetAlignMode(enum DUILV_UNITITEM_HORZ eHovAlign, enum DUILV_UNITITEM_VERT eVerAlign  ) = 0;
	virtual HRESULT __stdcall raw_GetVerAlignMode(enum DUILV_UNITITEM_VERT *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHorzAlignMode(enum DUILV_UNITITEM_HORZ *pResult) = 0;
	virtual HRESULT __stdcall raw_GetUnitItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetUnitItemData(long nIndex, BSTR *strText, BSTR *strURL, BSTR *strImagePath  ) = 0;
	virtual HRESULT __stdcall raw_Reset() = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(struct IDUITextStyle *pTextStyle, enum DUILVI_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(enum DUILVI_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_IsUserModule(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetControlBase(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetToolTipText(BSTR strText  ) = 0;

	//
	//Method Wrapper
	//
	void AppendStatic(tstring  strText, tstring  strURL  );
	void AppendImage(tstring  strImagePath  );
	void SetAlignMode(enum DUILV_UNITITEM_HORZ  eHovAlign, enum DUILV_UNITITEM_VERT  eVerAlign  );
	enum DUILV_UNITITEM_VERT  GetVerAlignMode();
	enum DUILV_UNITITEM_HORZ  GetHorzAlignMode();
	long  GetUnitItemCount();
	void GetUnitItemData(long  nIndex, BSTR * strText, BSTR * strURL, BSTR * strImagePath  );
	void Reset();
	void SetTextStyle(struct IDUITextStyle * pTextStyle, enum DUILVI_STATE  eState  );
	struct IDUITextStyle * GetTextStyle(enum DUILVI_STATE  eState  );
	struct SkinRect  GetRect();
	long  IsUserModule();
	struct IDUIControlBase * GetControlBase();
	void SetToolTipText(tstring  strText  );
};

struct __declspec(uuid("51d77114-3e1c-4f0c-92c8-c091b867d715")) IDUITVItemBase : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE hData, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetType(enum DUILV_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pObjPtr  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroup(struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetIndex(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCustomObj(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDefOffset(struct SkinSize DefSize  ) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText, BOOL  bRedraw  );
	tstring  GetText();
	void SetID(long  nID  );
	long  GetID();
	BOOL  SetData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetData();
	enum DUILV_TYPE  GetType();
	void SetObjPtr(OLE_HANDLE  pObjPtr  );
	struct SkinRect  GetRect();
	struct IDUITVItemGroup * GetGroup();
	long  GetIndex();
	struct IDUIControlBase * GetCustomObj();
	void SetDefOffset(struct SkinSize  DefSize  );
};

enum DUILV_TYPE
{ 
	DUILV_GROUP = 1,
	DUILV_ITEM = 0 
};

struct __declspec(uuid("2b166dd5-13a6-4f53-8991-7b0707ab4528")) IDUITVItemGroup : IDUITVItemBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InsertItem(long nIndex, long nID, BSTR strText, struct IDUITVItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(long nID, BSTR strText, struct IDUITVItem **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUITVItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;
	virtual HRESULT __stdcall raw_GetItem(long nID, struct IDUITVItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(long nIndex, struct IDUITVItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetExpand(VARIANT_BOOL bExpand  ) = 0;
	virtual HRESULT __stdcall raw_IsExpand(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHaveGroup(VARIANT_BOOL bHaveGroup  ) = 0;
	virtual HRESULT __stdcall raw_AddGroup(long nID, BSTR strName, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllGroup() = 0;
	virtual HRESULT __stdcall raw_GetGroupByName(BSTR strName, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupByID(long nID, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetHaveGroup(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphics(OLE_HANDLE hBmp, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphics(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertGroup(long nIndex, long nID, BSTR strName, struct IDUITVItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHaveCloseButton(VARIANT_BOOL bHaveButton  ) = 0;
	virtual HRESULT __stdcall raw_HaveCloseButton(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextColor(OLE_COLOR color  ) = 0;
	virtual HRESULT __stdcall raw_SetIcon(struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_SetGroupHeight(long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetGroupHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheck(short nCheck  ) = 0;
	virtual HRESULT __stdcall raw_GetCheck(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemEnable(long nIndex, VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetUsePureVirList(VARIANT_BOOL bUse, long nMaxCount  ) = 0;
	virtual HRESULT __stdcall raw_ScrollTopOrBottom(VARIANT_BOOL bTop  ) = 0;
	virtual HRESULT __stdcall raw_ScrollDistance(long nDistance  ) = 0;
	virtual HRESULT __stdcall raw_GetCurDistance(VARIANT_BOOL bTop, long *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUITVItem * InsertItem(long  nIndex, long  nID, tstring  strText  );
	struct IDUITVItem * AppendItem(long  nID, tstring  strText  );
	BOOL  RemoveItem(struct IDUITVItem * pItem  );
	BOOL  RemoveItemByID(long  nID  );
	void RemoveAllItems();
	struct IDUITVItem * GetItem(long  nID  );
	struct IDUITVItemBase * GetAt(long  nIndex  );
	long  GetCount();
	void SetExpand(BOOL  bExpand  );
	BOOL  IsExpand();
	void SetHaveGroup(BOOL  bHaveGroup  );
	struct IDUITVItemGroup * AddGroup(long  nID, tstring  strName  );
	BOOL  RemoveGroupByID(long  nID  );
	BOOL  RemoveGroupByName(tstring  strName  );
	void RemoveAllGroup();
	struct IDUITVItemGroup * GetGroupByName(tstring  strName  );
	struct IDUITVItemGroup * GetGroupByID(long  nID  );
	BOOL  GetHaveGroup();
	void SetGraphics(OLE_HANDLE  hBmp, BOOL  bRedraw  );
	OLE_HANDLE  GetGraphics();
	struct IDUITVItemGroup * InsertGroup(long  nIndex, long  nID, tstring  strName  );
	void SetHaveCloseButton(BOOL  bHaveButton  );
	BOOL  HaveCloseButton();
	void SetTextColor(OLE_COLOR  color  );
	void SetIcon(struct IDUIImageBase * pImageBase  );
	void SetGroupHeight(long  nHeight  );
	long  GetGroupHeight();
	void SetCheck(short  nCheck  );
	short  GetCheck();
	void SetItemEnable(long  nIndex, BOOL  bEnable  );
	void SetUsePureVirList(BOOL  bUse, long  nMaxCount  );
	void ScrollTopOrBottom(BOOL  bTop = TRUE  );
	void ScrollDistance(long  nDistance = 0  );
	long  GetCurDistance(BOOL  bTop = TRUE  );
};

struct __declspec(uuid("927565b4-6573-4532-ad69-9296e3f05437")) IDUITVItem : IDUITVItemBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetGraphics(enum DUILVI_STATE eState, OLE_HANDLE hBitmap, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphics(enum DUILVI_STATE eState, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHeight(long nHeight, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_Refresh() = 0;
	virtual HRESULT __stdcall raw_GetUnitItem(long nCol, struct IDUIUnitItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItemText(short iSubItem, BSTR szItem, BSTR szURL, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_AppendImage(short iSubItem, BSTR szImagePath, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_SetCheck(VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_SetWidth(long nWidth, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnable(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_GetEnable(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetGraphics(enum DUILVI_STATE  eState, OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetGraphics(enum DUILVI_STATE  eState  );
	void SetHeight(long  nHeight, BOOL  bRedraw  );
	long  GetHeight();
	void Refresh();
	struct IDUIUnitItem * GetUnitItem(long  nCol  );
	void AppendItemText(short  iSubItem, tstring  szItem, tstring  szURL, BOOL  bRedraw  );
	void AppendImage(short  iSubItem, tstring  szImagePath, BOOL  bRedraw  );
	void SetCheck(BOOL  bCheck  );
	void SetWidth(long  nWidth, BOOL  bRedraw  );
	long  GetWidth();
	void SetEnable(BOOL  bEnable  );
	BOOL  GetEnable();
};

struct __declspec(uuid("333ac87d-148e-4985-9ac9-b68bec61fd03")) IDUIScrollBar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetScrollPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollPos(long nPos, VARIANT_BOOL bRedraw, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollRange(long *lpMin, long *lpMax  ) = 0;
	virtual HRESULT __stdcall raw_SetScrollRange(long nMin, long nMax, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_ShowScrollBar(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_EnableScrollBar(VARIANT_BOOL bEnabled  ) = 0;
	virtual HRESULT __stdcall raw_SetScrollInfo(struct DUISCROLLINFO *lpScrollInfo, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollInfo(struct DUISCROLLINFO *lpScrollInfo, enum DUISB_MASK sifMask, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollLimit(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollBarInfo(struct DUISCROLLBARINFO *pScrollBarInfo, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetLeftUpImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLeftUpImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetRightDownImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRightDownImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumbImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumbTickImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbTickImage(VARIANT_BOOL bHorz, enum DUISCOLLBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHorz(VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_IsHorz(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPageSize(long nPageSize  ) = 0;
	virtual HRESULT __stdcall raw_GetPageSize(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOwnerCtrl(struct IDUIControlBase *pOwnerCtrl  ) = 0;
	virtual HRESULT __stdcall raw_GetOwnerCtrl(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_ReDraw() = 0;
	virtual HRESULT __stdcall raw_SetHorzUpButtonWidth(long nHorzUpButtonWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetHorzDownButtonWidth(long nHorzDownButtonWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetVertUpButtonHeight(long nVertUpButtonHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetVertDownButtonHeight(long nVertDownButtonHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetHorzUpButtonWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHorzDownButtonWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetVertUpButtonHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetVertDownButtonHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFadeInOut(VARIANT_BOOL bFadeInOut  ) = 0;
	virtual HRESULT __stdcall raw_GetFadeInOut(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_StartFadeInOut(VARIANT_BOOL bFadeIn  ) = 0;
	virtual HRESULT __stdcall raw_EndFadeInOut() = 0;
	virtual HRESULT __stdcall raw_SetFadeInOutStep(int nStep  ) = 0;
	virtual HRESULT __stdcall raw_SetScrollPosEvent(long nPos, VARIANT_BOOL bRedraw, VARIANT_BOOL bEvent, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbMin(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumnMin(long nMinPos  ) = 0;

	//
	//Method Wrapper
	//
	long  GetScrollPos();
	long  SetScrollPos(long  nPos, BOOL  bRedraw = TRUE  );
	void GetScrollRange(long * lpMin, long * lpMax  );
	void SetScrollRange(long  nMin, long  nMax, BOOL  bRedraw = TRUE  );
	void ShowScrollBar(BOOL  bShow = TRUE  );
	void EnableScrollBar(BOOL  bEnabled  );
	BOOL  SetScrollInfo(struct DUISCROLLINFO * lpScrollInfo, BOOL  bRedraw = TRUE  );
	BOOL  GetScrollInfo(struct DUISCROLLINFO * lpScrollInfo, enum DUISB_MASK  sifMask = (DUISB_MASK)31  );
	long  GetScrollLimit();
	BOOL  GetScrollBarInfo(struct DUISCROLLBARINFO * pScrollBarInfo  );
	BOOL  SetBackImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState, struct IDUIImageBase * pImage  );
	struct IDUIImageBase * GetBackImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState  );
	BOOL  SetLeftUpImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState, struct IDUIImageBase * pImage  );
	struct IDUIImageBase * GetLeftUpImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState  );
	BOOL  SetRightDownImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState, struct IDUIImageBase * pImage  );
	struct IDUIImageBase * GetRightDownImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState  );
	BOOL  SetThumbImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState, struct IDUIImageBase * pImage  );
	struct IDUIImageBase * GetThumbImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState  );
	BOOL  SetThumbTickImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState, struct IDUIImageBase * pImage  );
	struct IDUIImageBase * GetThumbTickImage(BOOL  bHorz, enum DUISCOLLBAR_STATE  eState  );
	void SetHorz(BOOL  bHorz  );
	BOOL  IsHorz();
	void SetPageSize(long  nPageSize  );
	long  GetPageSize();
	void SetOwnerCtrl(struct IDUIControlBase * pOwnerCtrl  );
	struct IDUIControlBase * GetOwnerCtrl();
	void ReDraw();
	void SetHorzUpButtonWidth(long  nHorzUpButtonWidth  );
	void SetHorzDownButtonWidth(long  nHorzDownButtonWidth  );
	void SetVertUpButtonHeight(long  nVertUpButtonHeight  );
	void SetVertDownButtonHeight(long  nVertDownButtonHeight  );
	long  GetHorzUpButtonWidth();
	long  GetHorzDownButtonWidth();
	long  GetVertUpButtonHeight();
	long  GetVertDownButtonHeight();
	void SetFadeInOut(BOOL  bFadeInOut  );
	BOOL  GetFadeInOut();
	void StartFadeInOut(BOOL  bFadeIn  );
	void EndFadeInOut();
	void SetFadeInOutStep(int  nStep  );
	long  SetScrollPosEvent(long  nPos, BOOL  bRedraw = TRUE, BOOL  bEvent = TRUE  );
	long  GetThumbMin();
	void SetThumnMin(long  nMinPos  );
};

struct __declspec(uuid("5826dfa3-a219-4887-bdb3-1053debf0847")) DUISCROLLINFO
{
	unsigned long 	ulSize;
	unsigned long 	ulMask;
	long 	nMin;
	long 	nMax;
	unsigned long 	ulPage;
	long 	nPos;
	long 	nTrackPos;
};

enum DUISB_MASK
{ 
	DUISB_SIF_ALL = 23,
	DUISB_SIF_DISABLENOSCROLL = 8,
	DUISB_SIF_PAGE = 2,
	DUISB_SIF_POS = 4,
	DUISB_SIF_RANGE = 1,
	DUISB_SIF_TRACKPOS = 16 
};

struct __declspec(uuid("55b6b586-5576-4e7d-8c4e-054e6af1e98f")) DUISCROLLBARINFO
{
	unsigned long 	ulSize;
	struct SkinRect 	rcScrollBar;
	long 	dxyLineButton;
	long 	xyThumbTop;
	long 	xyThumbBottom;
	long 	reserved;
	LONG	rgstate;
};

enum DUISCOLLBAR_STATE
{ 
	DUISB_STATE_DISABLED = 1,
	DUISB_STATE_HOT = 2,
	DUISB_STATE_LAST = 4,
	DUISB_STATE_NORMAL = 0,
	DUISB_STATE_PRESS = 3 
};

struct __declspec(uuid("15056816-1230-4e86-a4b3-39f2322aff68")) DUILV_IDPAIR
{
	long 	nGroupID;
	long 	nItemID;
};

struct __declspec(uuid("1cb23c69-3d5a-41b1-b2f6-738d777d583e")) _IDUILVColumnEvents : IDispatch
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

struct __declspec(uuid("226d3a7d-2e9c-4ec9-b195-8524bdd75696")) _IDUIUnitItemEvents : IDispatch
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

struct __declspec(uuid("f36e2551-bd03-46c1-a4da-86a30702a528")) _IDUITVItemGroupEvents : IDispatch
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

struct __declspec(uuid("bb56cb4e-769b-49f7-b58d-212bf45eca2e")) _IDUITVItemEvents : IDispatch
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

enum DUI_MUMEBARMSG
{ 
	DUISM_HEIGHTCHENGED = 2768,
	DUISM_MENUBARITEMDOWN = 2769 
};

struct __declspec(uuid("7ffc22f0-e2a9-4ce6-9b45-5f9dace36fbf")) _IDUIMenuBarEvents : IDispatch
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

struct __declspec(uuid("9985e759-5eeb-4667-99fa-e26b266fcec3")) IDUIMenuBar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetMenuBarBack(short nState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuBarBack(short nState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemImage(enum DUI_MENUBAR_ITEM_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemImage(enum DUI_MENUBAR_ITEM_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTextStyle(enum DUI_MENUBAR_ITEM_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTextStyle(enum DUI_MENUBAR_ITEM_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(long nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemsSapce(long nSpace, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemSpace(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetShowMore(VARIANT_BOOL bShowMore, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetShowMore(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMenuBarHeight(long nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuBarHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_LoadMenu(OLE_HANDLE hMenu, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(OLE_HANDLE hMenu, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItem(OLE_HANDLE hMenu, BSTR strText, short nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteItem(short nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ModifyItem(short nIndex, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetShowMoreImage(enum DUI_MENUBAR_ITEM_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetShowMoreImage(enum DUI_MENUBAR_ITEM_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenu(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(short nState, struct IFillColor *pColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(short nState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_LoadDUIMenu(IDispatch *pDUIMenu, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuItemCount(long *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetMenuBarBack(short  nState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetMenuBarBack(short  nState  );
	BOOL  SetItemImage(enum DUI_MENUBAR_ITEM_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetItemImage(enum DUI_MENUBAR_ITEM_STATE  eState  );
	BOOL  SetItemTextStyle(enum DUI_MENUBAR_ITEM_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetItemTextStyle(enum DUI_MENUBAR_ITEM_STATE  eState  );
	BOOL  SetItemHeight(long  nHeight, BOOL  bRedraw  );
	long  GetItemHeight();
	BOOL  SetItemsSapce(long  nSpace, BOOL  bRedraw  );
	long  GetItemSpace();
	BOOL  SetShowMore(BOOL  bShowMore, BOOL  bRedraw  );
	BOOL  GetShowMore();
	BOOL  SetMenuBarHeight(long  nHeight, BOOL  bRedraw  );
	long  GetMenuBarHeight();
	BOOL  LoadMenu(OLE_HANDLE  hMenu  );
	BOOL  AppendItem(OLE_HANDLE  hMenu, tstring  strText  );
	BOOL  InsertItem(OLE_HANDLE  hMenu, tstring  strText, short  nIndex  );
	BOOL  DeleteItem(short  nIndex  );
	BOOL  ModifyItem(short  nIndex, tstring  strText  );
	BOOL  SetShowMoreImage(enum DUI_MENUBAR_ITEM_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetShowMoreImage(enum DUI_MENUBAR_ITEM_STATE  eState  );
	OLE_HANDLE  GetMenu();
	BOOL  SetBackDrawColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetBackDrawColor();
	BOOL  SetBackColor(short  nState, struct IFillColor * pColor, BOOL  bRedraw  );
	struct IFillColor * GetBackColor(short  nState  );
	BOOL  LoadDUIMenu(IDispatch * pDUIMenu  );
	long  GetMenuItemCount();
};

enum DUI_MENUBAR_ITEM_STATE
{ 
	DUI_MENUITEM_DISABLE = 2,
	DUI_MENUITEM_HOT = 3,
	DUI_MENUITEM_LAST = 4,
	DUI_MENUITEM_NORMAL = 0,
	DUI_MENUITEM_PRESS = 1 
};

struct __declspec(uuid("8c2c239e-761f-4168-a935-b57bf1743c82")) _IDUIProgressbarEvents : IDispatch
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

struct __declspec(uuid("09d5e6a5-adbe-4a26-a53a-1f2130359f98")) IDUIProgressbar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetRange(short nLower, short nUpper  ) = 0;
	virtual HRESULT __stdcall raw_GetRange(short *pnLower, short *pnUpper  ) = 0;
	virtual HRESULT __stdcall raw_SetPos(short nPos, short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPos(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStep(short nStep, short *pResult) = 0;
	virtual HRESULT __stdcall raw_StepIt(short *pResult) = 0;
	virtual HRESULT __stdcall raw_OffsetPos(short nStep, short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsHorz(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHorz(VARIANT_BOOL bHorz, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsDrawText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawText(VARIANT_BOOL bDrawText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsDrawBorder(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsBorderDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsBackDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsClientDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetClientDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBorderImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBorderColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderColor(struct IFillColor *pColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetClientImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetClientColor(struct IFillColor *pColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBorderWidth(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderWidth(unsigned long nWidth, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientOffset(unsigned long *Leftoffset, unsigned long *Topoffset, unsigned long *Rightoffset, unsigned long *Bottomoffset  ) = 0;
	virtual HRESULT __stdcall raw_SetClientOffset(unsigned long Leftoffset, unsigned long Topoffset, unsigned long Rightoffset, unsigned long Bottomoffset, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(struct IDUITextStyle *pTextStyle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextFormat(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextFormat(BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetForeImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetForeImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetForeColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetForeColor(struct IFillColor *pColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetForeWidth(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetForeWidth(unsigned long nWidth, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetClientWidth(unsigned long nWidth, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientWidth(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpeed(unsigned long nSpeed, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpeed(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetElapse(unsigned long nElapse, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetElapse(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_StartAnimate(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_StopAnimate(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRunOnce(VARIANT_BOOL bRunOnce, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsRunOnce(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsForeDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetForeDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetForeOffset(unsigned long *Leftoffset, unsigned long *Topoffset, unsigned long *Rightoffset, unsigned long *Bottomoffset  ) = 0;
	virtual HRESULT __stdcall raw_SetForeOffset(unsigned long Leftoffset, unsigned long Topoffset, unsigned long Rightoffset, unsigned long Bottomoffset, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStyle(enum PROGRESSBAR_STYLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStyle(enum PROGRESSBAR_STYLE Style, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetRange(short  nLower, short  nUpper  );
	void GetRange(short * pnLower, short * pnUpper  );
	short  SetPos(short  nPos  );
	short  GetPos();
	short  SetStep(short  nStep  );
	short  StepIt();
	short  OffsetPos(short  nStep  );
	BOOL  IsHorz();
	BOOL  SetHorz(BOOL  bHorz  );
	BOOL  IsDrawText();
	BOOL  SetDrawText(BOOL  bDrawText  );
	BOOL  IsDrawBorder();
	BOOL  IsBorderDrawColor();
	BOOL  SetBorderDrawColor(BOOL  bDrawColor  );
	BOOL  IsBackDrawColor();
	BOOL  SetBackDrawColor(BOOL  bDrawColor  );
	BOOL  IsClientDrawColor();
	BOOL  SetClientDrawColor(BOOL  bDrawColor  );
	struct IDUIImageBase * GetBorderImage();
	BOOL  SetBorderImage(struct IDUIImageBase * pImageBase  );
	struct IFillColor * GetBorderColor();
	BOOL  SetBorderColor(struct IFillColor * pColor  );
	struct IDUIImageBase * GetBackImage();
	BOOL  SetBackImage(struct IDUIImageBase * pImageBase  );
	struct IFillColor * GetBackColor();
	BOOL  SetBackColor(struct IFillColor * pColor  );
	struct IDUIImageBase * GetClientImage();
	BOOL  SetClientImage(struct IDUIImageBase * pImageBase  );
	struct IFillColor * GetClientColor();
	BOOL  SetClientColor(struct IFillColor * pColor  );
	unsigned long  GetBorderWidth();
	BOOL  SetBorderWidth(unsigned long  nWidth  );
	void GetClientOffset(unsigned long * Leftoffset, unsigned long * Topoffset, unsigned long * Rightoffset, unsigned long * Bottomoffset  );
	BOOL  SetClientOffset(unsigned long  Leftoffset, unsigned long  Topoffset, unsigned long  Rightoffset, unsigned long  Bottomoffset  );
	struct IDUITextStyle * GetTextStyle();
	BOOL  SetTextStyle(struct IDUITextStyle * pTextStyle  );
	tstring  GetTextFormat();
	BOOL  SetTextFormat(tstring  strText  );
	struct IDUIImageBase * GetForeImage();
	BOOL  SetForeImage(struct IDUIImageBase * pImageBase  );
	struct IFillColor * GetForeColor();
	BOOL  SetForeColor(struct IFillColor * pColor  );
	unsigned long  GetForeWidth();
	BOOL  SetForeWidth(unsigned long  nWidth  );
	BOOL  SetClientWidth(unsigned long  nWidth  );
	unsigned long  GetClientWidth();
	BOOL  SetSpeed(unsigned long  nSpeed  );
	unsigned long  GetSpeed();
	BOOL  SetElapse(unsigned long  nElapse  );
	unsigned long  GetElapse();
	BOOL  StartAnimate();
	BOOL  StopAnimate();
	BOOL  SetRunOnce(BOOL  bRunOnce  );
	BOOL  IsRunOnce();
	BOOL  IsForeDrawColor();
	BOOL  SetForeDrawColor(BOOL  bDrawColor  );
	void GetForeOffset(unsigned long * Leftoffset, unsigned long * Topoffset, unsigned long * Rightoffset, unsigned long * Bottomoffset  );
	BOOL  SetForeOffset(unsigned long  Leftoffset, unsigned long  Topoffset, unsigned long  Rightoffset, unsigned long  Bottomoffset  );
	enum PROGRESSBAR_STYLE  GetStyle();
	BOOL  SetStyle(enum PROGRESSBAR_STYLE  Style  );
};

enum PROGRESSBAR_STYLE
{ 
	PIE_STYLE = 0,
	STANDARD_STYLE = 1,
	VISTA_STYLE = 2 
};

enum DUI_SCROLLBARMSGID
{ 
	DUI_SBMSG_HSCROLL = 2944,
	DUI_SBMSG_VSCROLL = 2945 
};

struct __declspec(uuid("5f7ff530-450b-4d06-a892-f1868154bc46")) _IDUIScrollBarEvents : IDispatch
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

enum DUI_SCROLLCONTAINER_STYLE
{ 
	DUI_SCROLLCONTAINER_BOX = 4,
	DUI_SCROLLCONTAINER_FLOW = 0,
	DUI_SCROLLCONTAINER_GRID = 1,
	DUI_SCROLLCONTAINER_HBOX = 3,
	DUI_SCROLLCONTAINER_VBOX = 2 
};

struct __declspec(uuid("45bb233d-e6b0-46ee-8809-25f006f557ee")) _IDUIScrollContainerEvents : IDispatch
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

struct __declspec(uuid("009a49b7-d047-414e-b0d2-1939fb29cc58")) IDUIScrollContainer : IDUIControlBase
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

enum DUISliderMsgID
{ 
	DUISM_SLIDER_LBUTTONDOWN = 5343,
	DUISM_SLIDER_LBUTTONUP = 5344,
	DUISM_SLIDER_THUMBTRACK = 5342 
};

struct __declspec(uuid("98eb84dc-e572-422e-b913-b36b5720da52")) _IDUISliderbarEvents : IDispatch
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

struct __declspec(uuid("5c5eea05-959a-4b52-8fd7-d9466a383336")) IDUISliderbar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetSliderType(enum DUI_SLIDERCTRLTYPE eSliderType, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSliderType(enum DUI_SLIDERCTRLTYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetChannelImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChannelImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHorzSliderCtrl(VARIANT_BOOL bHorz, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsHorzSliderCtrl(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawChannelColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsDrawChannelColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetChannelBorderColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChannelBorderColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetChannelColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChannelColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetChannelHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetChannelHeight(short nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBorderWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderWidth(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRange(long *pnMin, long *pnMax  ) = 0;
	virtual HRESULT __stdcall raw_SetRange(long nMin, long nMax, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRangeMin(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRangeMin(long nMin, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRangeMax(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRangeMax(long nMax, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawThumbColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsDrawThumbColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumbColor(enum DUI_BUTTONSTATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbColor(enum DUI_BUTTONSTATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumbHeight(short nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumbWidth(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetThumbImage(enum DUI_BUTTONSTATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetThumbImage(enum DUI_BUTTONSTATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPointType(enum DUI_POINTTYPE eTickType, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPointType(enum DUI_POINTTYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTickMarks(VARIANT_BOOL bTickmarks, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsTickMarks(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoTics(VARIANT_BOOL bAutoTics, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsAutoTics(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTickImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTickImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTickColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTickColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetLineLength(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineLength(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLineWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineWidth(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLineSpace(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineSpace(short nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTicFreg(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTicFreg(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawSelColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsDrawSelColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectionImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectionImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectionColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectionColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelection(long *pnMin, long *pnMax  ) = 0;
	virtual HRESULT __stdcall raw_SetSelection(long nMin, long nMax, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelRangeMin(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelRangeMin(long value, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelRangeMax(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelRangeMax(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectionHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectionHeight(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVirtualThumb(VARIANT_BOOL bVirtual, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsVirtualThumb(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVirtualThumbImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetVirtualThumbImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawStateColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsDrawStateColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateHeight(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpace(long *pnSpaceStart, long *pnSpaceEnd  ) = 0;
	virtual HRESULT __stdcall raw_SetSpace(long nSpaceStart, long nSpaceEnd, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpaceStart(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpaceStart(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpaceEnd(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpaceEnd(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateSpace(long *pnSpaceStart, long *pnSpaceEnd  ) = 0;
	virtual HRESULT __stdcall raw_SetStateSpace(long nSpaceStart, long nSpaceEnd, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateSpaceStart(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateSpaceStart(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateSpaceEnd(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateSpaceEnd(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnableSelecton(VARIANT_BOOL bEnableSel, VARIANT_BOOL bRedraw, short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsEnableSelecton(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPos(long nPos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTic(long nTic, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTicPos(long nTic, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTicArray(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetNumTics(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTic(long nTic, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ClearTics(VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ClearSel(VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineSize(long nSize, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLineSize(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPageSize(long nSize, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPageSize(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawFrontColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsDrawFrontColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFrontImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFrontImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetFrontColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFrontColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetFrontHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFrontHeight(long nValue, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStatePos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStatePos(long nPos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnabledState(VARIANT_BOOL bEnabled, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsEnabledState(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsStepProgress(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStepProgress(VARIANT_BOOL bEnable  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetSliderType(enum DUI_SLIDERCTRLTYPE  eSliderType, BOOL  bRedraw  );
	enum DUI_SLIDERCTRLTYPE  GetSliderType();
	BOOL  SetChannelImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetChannelImage();
	BOOL  SetHorzSliderCtrl(BOOL  bHorz, BOOL  bRedraw  );
	BOOL  GetIsHorzSliderCtrl();
	BOOL  SetDrawChannelColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetIsDrawChannelColor();
	BOOL  SetChannelBorderColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetChannelBorderColor();
	BOOL  SetChannelColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetChannelColor();
	short  GetChannelHeight();
	BOOL  SetChannelHeight(short  nHeight, BOOL  bRedraw  );
	short  GetBorderWidth();
	BOOL  SetBorderWidth(short  nValue, BOOL  bRedraw  );
	void GetRange(long * pnMin, long * pnMax  );
	BOOL  SetRange(long  nMin, long  nMax, BOOL  bRedraw  );
	long  GetRangeMin();
	BOOL  SetRangeMin(long  nMin, BOOL  bRedraw  );
	long  GetRangeMax();
	BOOL  SetRangeMax(long  nMax, BOOL  bRedraw  );
	BOOL  SetDrawThumbColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetIsDrawThumbColor();
	BOOL  SetThumbColor(enum DUI_BUTTONSTATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetThumbColor(enum DUI_BUTTONSTATE  eState  );
	short  GetThumbHeight();
	BOOL  SetThumbHeight(short  nHeight, BOOL  bRedraw  );
	short  GetThumbWidth();
	BOOL  SetThumbWidth(short  nValue, BOOL  bRedraw  );
	BOOL  SetThumbImage(enum DUI_BUTTONSTATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetThumbImage(enum DUI_BUTTONSTATE  eState  );
	BOOL  SetTooltip(tstring  strTooltip, BOOL  bRedraw  );
	tstring  GetTooltip();
	BOOL  SetPointType(enum DUI_POINTTYPE  eTickType, BOOL  bRedraw  );
	enum DUI_POINTTYPE  GetPointType();
	BOOL  SetTickMarks(BOOL  bTickmarks, BOOL  bRedraw  );
	BOOL  GetIsTickMarks();
	BOOL  SetAutoTics(BOOL  bAutoTics, BOOL  bRedraw  );
	BOOL  GetIsAutoTics();
	BOOL  SetTickImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetTickImage();
	BOOL  SetTickColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetTickColor();
	short  GetLineLength();
	BOOL  SetLineLength(short  nValue, BOOL  bRedraw  );
	short  GetLineWidth();
	BOOL  SetLineWidth(short  nValue, BOOL  bRedraw  );
	short  GetLineSpace();
	BOOL  SetLineSpace(short  nValue, BOOL  bRedraw  );
	long  GetTicFreg();
	BOOL  SetTicFreg(long  nValue, BOOL  bRedraw  );
	BOOL  SetDrawSelColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetIsDrawSelColor();
	BOOL  SetSelectionImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetSelectionImage();
	BOOL  SetSelectionColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetSelectionColor();
	void GetSelection(long * pnMin, long * pnMax  );
	BOOL  SetSelection(long  nMin, long  nMax, BOOL  bRedraw  );
	long  GetSelRangeMin();
	BOOL  SetSelRangeMin(long  value, BOOL  bRedraw  );
	long  GetSelRangeMax();
	BOOL  SetSelRangeMax(long  nValue, BOOL  bRedraw  );
	long  GetSelectionHeight();
	BOOL  SetSelectionHeight(long  nValue, BOOL  bRedraw  );
	BOOL  SetVirtualThumb(BOOL  bVirtual, BOOL  bRedraw  );
	BOOL  GetIsVirtualThumb();
	BOOL  SetVirtualThumbImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetVirtualThumbImage();
	BOOL  SetDrawStateColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetIsDrawStateColor();
	BOOL  SetStateImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetStateImage();
	BOOL  SetStateColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetStateColor();
	long  GetStateHeight();
	BOOL  SetStateHeight(long  nValue, BOOL  bRedraw  );
	void GetSpace(long * pnSpaceStart, long * pnSpaceEnd  );
	BOOL  SetSpace(long  nSpaceStart, long  nSpaceEnd, BOOL  bRedraw  );
	long  GetSpaceStart();
	BOOL  SetSpaceStart(long  nValue, BOOL  bRedraw  );
	long  GetSpaceEnd();
	BOOL  SetSpaceEnd(long  nValue, BOOL  bRedraw  );
	void GetStateSpace(long * pnSpaceStart, long * pnSpaceEnd  );
	BOOL  SetStateSpace(long  nSpaceStart, long  nSpaceEnd, BOOL  bRedraw  );
	long  GetStateSpaceStart();
	BOOL  SetStateSpaceStart(long  nValue, BOOL  bRedraw  );
	long  GetStateSpaceEnd();
	BOOL  SetStateSpaceEnd(long  nValue, BOOL  bRedraw  );
	short  SetEnableSelecton(BOOL  bEnableSel, BOOL  bRedraw  );
	BOOL  GetIsEnableSelecton();
	long  GetPos();
	BOOL  SetPos(long  nPos  );
	long  GetTic(long  nTic  );
	long  GetTicPos(long  nTic  );
	long  GetTicArray();
	long  GetNumTics();
	BOOL  SetTic(long  nTic  );
	BOOL  ClearTics(BOOL  bRedraw  );
	BOOL  ClearSel(BOOL  bRedraw  );
	long  SetLineSize(long  nSize  );
	long  GetLineSize();
	long  SetPageSize(long  nSize  );
	long  GetPageSize();
	BOOL  SetDrawFrontColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetIsDrawFrontColor();
	BOOL  SetFrontImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetFrontImage();
	BOOL  SetFrontColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetFrontColor();
	long  GetFrontHeight();
	BOOL  SetFrontHeight(long  nValue, BOOL  bRedraw  );
	long  GetStatePos();
	BOOL  SetStatePos(long  nPos  );
	BOOL  SetEnabledState(BOOL  bEnabled, BOOL  bRedraw  );
	BOOL  GetIsEnabledState();
	BOOL  IsStepProgress();
	void SetStepProgress(BOOL  bEnable  );
};

enum DUI_SLIDERCTRLTYPE
{ 
	DUI_SLIDERCTRL_CUSTOM = 1,
	DUI_SLIDERCTRL_STANDARD = 0 
};

enum DUI_POINTTYPE
{ 
	DUI_POINT_BOTH = 0,
	DUI_POINT_LEFT = 1,
	DUI_POINT_RIGHT = 2 
};

struct __declspec(uuid("32fba143-3572-437b-9660-3be5b18b7893")) _IDUISpinEvents : IDispatch
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

struct __declspec(uuid("fdd237f1-6354-4b57-9b3b-ad0548d1d15c")) IDUISpin : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetSpinMode(VARIANT_BOOL bHorz, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpinMode(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonImage(VARIANT_BOOL bUpBtn, enum DUI_SPIN_BUTTON_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonImage(VARIANT_BOOL bUpBtn, enum DUI_SPIN_BUTTON_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonGraphics(VARIANT_BOOL bUpBtn, enum DUI_SPIN_BUTTON_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonGraphics(VARIANT_BOOL bUpBtn, enum DUI_SPIN_BUTTON_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetRange(long nMinVal, long nMaxVal, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRange(long *pnMinVal, long *pnMaxVal  ) = 0;
	virtual HRESULT __stdcall raw_SetMinVal(long nMinVal, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMinVal(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMaxVal(long nMaxVal, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMaxVal(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAccel(long nAccel, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAccel(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWrap(VARIANT_BOOL bWrap, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsWrap(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBuddyInteger(VARIANT_BOOL bInteger, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBuddyInteger(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBuddy(struct IDUIControlBase *pDUICtrl, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBuddy(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetPos(int nPos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPos(int *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBase(VARIANT_BOOL bHex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBase(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetSpinMode(BOOL  bHorz, BOOL  bRedraw  );
	BOOL  GetSpinMode();
	BOOL  SetButtonImage(BOOL  bUpBtn, enum DUI_SPIN_BUTTON_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetButtonImage(BOOL  bUpBtn, enum DUI_SPIN_BUTTON_STATE  eState  );
	BOOL  SetButtonGraphics(BOOL  bUpBtn, enum DUI_SPIN_BUTTON_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetButtonGraphics(BOOL  bUpBtn, enum DUI_SPIN_BUTTON_STATE  eState  );
	BOOL  SetRange(long  nMinVal, long  nMaxVal  );
	void GetRange(long * pnMinVal, long * pnMaxVal  );
	BOOL  SetMinVal(long  nMinVal  );
	long  GetMinVal();
	BOOL  SetMaxVal(long  nMaxVal  );
	long  GetMaxVal();
	BOOL  SetAccel(long  nAccel  );
	long  GetAccel();
	BOOL  SetWrap(BOOL  bWrap  );
	BOOL  GetIsWrap();
	BOOL  SetBuddyInteger(BOOL  bInteger  );
	BOOL  GetBuddyInteger();
	BOOL  SetBuddy(struct IDUIControlBase * pDUICtrl  );
	struct IDUIControlBase * GetBuddy();
	BOOL  SetPos(int  nPos  );
	int  GetPos();
	BOOL  SetBase(BOOL  bHex  );
	BOOL  GetBase();
};

enum DUI_SPIN_BUTTON_STATE
{ 
	DUI_SPIN_BUTTON_DISABLE = 3,
	DUI_SPIN_BUTTON_HOT = 1,
	DUI_SPIN_BUTTON_LAST = 4,
	DUI_SPIN_BUTTON_NORMAL = 0,
	DUI_SPIN_BUTTON_PRESS = 2 
};

struct __declspec(uuid("a6fbd1bb-7635-435d-bf34-71bfd97acfe6")) _IDUISplitterEvents : IDispatch
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

struct __declspec(uuid("be34175e-58a7-41ef-85e1-30b0e10618e9")) IDUISplitter : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetSplitterType(VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_SetSplitterHorzMin(long nTopMin, long nBottomMin  ) = 0;
	virtual HRESULT __stdcall raw_SetSplitterVertMin(long nLeftMin, long nRightMin  ) = 0;
	virtual HRESULT __stdcall raw_GetTopLeftMin(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBottomRightMin(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphLength(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphLength(long nGraphLength, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_SetBarPressColor(OLE_COLOR clrPress  ) = 0;

	//
	//Method Wrapper
	//
	void SetSplitterType(BOOL  bHorz  );
	void SetSplitterHorzMin(long  nTopMin, long  nBottomMin  );
	void SetSplitterVertMin(long  nLeftMin, long  nRightMin  );
	long  GetTopLeftMin();
	long  GetBottomRightMin();
	long  GetGraphLength();
	void SetGraphLength(long  nGraphLength, BOOL  bRedraw  );
	void SetBarPressColor(OLE_COLOR  clrPress  );
};

struct __declspec(uuid("0cfd17bf-1297-4787-9b99-365531a9481a")) _IDUIStaticEvents : IDispatch
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

struct __declspec(uuid("185b692c-d061-49b7-94c0-a60ace529654")) IDUIStatic : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStaticState(enum DUI_STATICSTATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStaticState(enum DUI_STATICSTATE eState  ) = 0;
	virtual HRESULT __stdcall raw_SetBackImageSec(enum DUI_STATICSTATE eState, struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_GetBackImageSec(enum DUI_STATICSTATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(enum DUI_STATICSTATE eState, struct IFillColor *pFillColor  ) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(enum DUI_STATICSTATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(enum DUI_STATICSTATE eState, struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(enum DUI_STATICSTATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_StartScroll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddScrollItem(BSTR strText, BSTR strURL, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextScroll(VARIANT_BOOL bIsScroll, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextScroll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollSpace(long nSpace, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollSpace(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollSpeed(long nSpeed, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollSpeed(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollStep(long nStep, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollStep(long *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteScrollItem(OLE_HANDLE hTextItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ModifyScrollItem(OLE_HANDLE hTextItem, BSTR strText, BSTR strNewURL, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteAllScrollItem(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollTextsCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHyperlink(VARIANT_BOOL bIsHyperlink, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIsHyperlink(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHyperlinkTextStyle(enum DUI_HYPERLINKTEXTSTYLE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetHyperlinkTextStyle(enum DUI_HYPERLINKTEXTSTYLE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ModifyScrollText(OLE_HANDLE hTextItem, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ModifyScrollURL(OLE_HANDLE hTextItem, BSTR strNewURL, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetURL(BSTR strURL, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetURL(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollText(OLE_HANDLE hTextItem, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollURL(OLE_HANDLE hTextItem, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageByPath(BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_GetImagePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageBack(OLE_HANDLE hBmp, enum DUI_STATICSTATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetImageBack(enum DUI_STATICSTATE eState, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAutoResize(VARIANT_BOOL *bAbleResize, unsigned long *nMinHeight, unsigned long *nMaxHeight, unsigned long *nMinWidth, unsigned long *nMaxWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetAutoResize(VARIANT_BOOL bAbleAutosize, unsigned long nMinHeight, unsigned long nMaxHeight, unsigned long nMinWidth, unsigned long nMaxWidth  ) = 0;
	virtual HRESULT __stdcall raw_PauseScroll(VARIANT_BOOL bPause, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWordType(enum DUI_ENUM_WORDTYPE eWordType  ) = 0;
	virtual HRESULT __stdcall raw_GetWordType(enum DUI_ENUM_WORDTYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableGetWord() = 0;
	virtual HRESULT __stdcall raw_DisableGetWord() = 0;
	virtual HRESULT __stdcall raw_SetSplitWord(BSTR strSplit  ) = 0;
	virtual HRESULT __stdcall raw_GetSplitWord(BSTR *strSplit  ) = 0;
	virtual HRESULT __stdcall raw_AppendSubScrollText(OLE_HANDLE hTextItem, BSTR strText, struct IDUITextStyle *ppTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_ClearVScrollText() = 0;
	virtual HRESULT __stdcall raw_AppendVScrollText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_StartVScroll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_StopVScroll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVWaitTime(long nTime  ) = 0;
	virtual HRESULT __stdcall raw_SetVInterval(long nInterval, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVMoveTop(VARIANT_BOOL bTop, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendSubString(BSTR strText, struct IDUITextStyle *pTextStyle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ChangeSubStringStyle(BSTR strText, struct IDUITextStyle *pTextStyle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteAllSubString(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	enum DUI_STATICSTATE  GetStaticState();
	void SetStaticState(enum DUI_STATICSTATE  eState  );
	void SetBackImageSec(enum DUI_STATICSTATE  eState, struct IDUIImageBase * pImageBase  );
	struct IDUIImageBase * GetBackImageSec(enum DUI_STATICSTATE  eState  );
	void SetBackColor(enum DUI_STATICSTATE  eState, struct IFillColor * pFillColor  );
	struct IFillColor * GetBackColor(enum DUI_STATICSTATE  eState  );
	void SetTextStyle(enum DUI_STATICSTATE  eState, struct IDUITextStyle * pTextStyle  );
	struct IDUITextStyle * GetTextStyle(enum DUI_STATICSTATE  eState  );
	void SetTooltip(tstring  strTooltip  );
	tstring  GetTooltip();
	BOOL  StartScroll();
	OLE_HANDLE  AddScrollItem(tstring  strText, tstring  strURL  );
	BOOL  SetTextScroll(BOOL  bIsScroll, BOOL  bRedraw  );
	BOOL  GetTextScroll();
	BOOL  SetScrollSpace(long  nSpace  );
	long  GetScrollSpace();
	BOOL  SetScrollSpeed(long  nSpeed  );
	long  GetScrollSpeed();
	BOOL  SetScrollStep(long  nStep  );
	long  GetScrollStep();
	BOOL  DeleteScrollItem(OLE_HANDLE  hTextItem  );
	BOOL  ModifyScrollItem(OLE_HANDLE  hTextItem, tstring  strText, tstring  strNewURL  );
	BOOL  DeleteAllScrollItem();
	short  GetScrollTextsCount();
	BOOL  SetHyperlink(BOOL  bIsHyperlink, BOOL  bRedraw  );
	BOOL  GetIsHyperlink();
	void SetHyperlinkTextStyle(enum DUI_HYPERLINKTEXTSTYLE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetHyperlinkTextStyle(enum DUI_HYPERLINKTEXTSTYLE  eState  );
	BOOL  SetDrawColor(BOOL  bDrawColor  );
	BOOL  GetDrawColor();
	BOOL  ModifyScrollText(OLE_HANDLE  hTextItem, tstring  strText  );
	BOOL  ModifyScrollURL(OLE_HANDLE  hTextItem, tstring  strNewURL  );
	BOOL  SetURL(tstring  strURL  );
	tstring  GetURL();
	tstring  GetScrollText(OLE_HANDLE  hTextItem  );
	tstring  GetScrollURL(OLE_HANDLE  hTextItem  );
	void SetImageByPath(tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	tstring  GetImagePath();
	void SetImageBack(OLE_HANDLE  hBmp, enum DUI_STATICSTATE  eState  );
	OLE_HANDLE  GetImageBack(enum DUI_STATICSTATE  eState  );
	void GetAutoResize(VARIANT_BOOL * bAbleResize, unsigned long * nMinHeight, unsigned long * nMaxHeight, unsigned long * nMinWidth, unsigned long * nMaxWidth  );
	void SetAutoResize(BOOL  bAbleAutosize, unsigned long  nMinHeight, unsigned long  nMaxHeight, unsigned long  nMinWidth, unsigned long  nMaxWidth  );
	BOOL  PauseScroll(BOOL  bPause  );
	void SetWordType(enum DUI_ENUM_WORDTYPE  eWordType  );
	enum DUI_ENUM_WORDTYPE  GetWordType();
	void EnableGetWord();
	void DisableGetWord();
	void SetSplitWord(tstring  strSplit  );
	void GetSplitWord(BSTR * strSplit  );
	void AppendSubScrollText(OLE_HANDLE  hTextItem, tstring  strText, struct IDUITextStyle * ppTextStyle  );
	void ClearVScrollText();
	void AppendVScrollText(tstring  strText  );
	BOOL  StartVScroll();
	BOOL  StopVScroll();
	void SetVWaitTime(long  nTime  );
	BOOL  SetVInterval(long  nInterval  );
	BOOL  SetVMoveTop(BOOL  bTop  );
	BOOL  AppendSubString(tstring  strText, struct IDUITextStyle * pTextStyle  );
	BOOL  ChangeSubStringStyle(tstring  strText, struct IDUITextStyle * pTextStyle  );
	BOOL  DeleteAllSubString();
};

enum DUI_STATICSTATE
{ 
	DUI_STATIC_ACTIVE = 0,
	DUI_STATIC_INACTIVE = 1,
	DUI_STATIC_LAST = 2 
};

enum DUI_HYPERLINKTEXTSTYLE
{ 
	DUI_TEXT_DISABLED = 3,
	DUI_TEXT_HOT = 2,
	DUI_TEXT_LAST = 4,
	DUI_TEXT_NORMAL = 0,
	DUI_TEXT_PRESS = 1 
};

enum DUI_ENUM_WORDTYPE
{ 
	CN_WORD = 1,
	EN_WORD = 0,
	OTHER_WORD = 2 
};

enum DUITABCTRL_STYLE
{ 
	DUITABCTRL_STYLE_BOTTOM = 2,
	DUITABCTRL_STYLE_LAST = 4,
	DUITABCTRL_STYLE_LEFT = 1,
	DUITABCTRL_STYLE_RIGHT = 3,
	DUITABCTRL_STYLE_TOP = 0 
};

enum DUITABCTRL_BTN_ID
{ 
	DUITABCTRL_BACKBTN_ID = 1000,
	DUITABCTRL_CLOSEBTN_ID = 1002,
	DUITABCTRL_NEXTBTN_ID = 1001 
};

enum DUITABCTRL_STATE
{ 
	DUITABCTRL_STATE_DISABLED = 1,
	DUITABCTRL_STATE_LAST = 2,
	DUITABCTRL_STATE_NORMAL = 0 
};

enum DUITABITEM_STATE
{ 
	DUITABITEM_STATE_DISABLED = 1,
	DUITABITEM_STATE_FOCUS = 4,
	DUITABITEM_STATE_HOT = 2,
	DUITABITEM_STATE_LAST = 5,
	DUITABITEM_STATE_NORMAL = 0,
	DUITABITEM_STATE_PRESS = 3 
};

enum DUI_TABCTRLMSGID
{ 
	DUI_TABMSG_BEGINDRAG = 3083,
	DUI_TABMSG_CLOSE = 3077,
	DUI_TABMSG_CLOSING = 3076,
	DUI_TABMSG_DRAGING = 3084,
	DUI_TABMSG_DRAGITEM = 3079,
	DUI_TABMSG_HASMOUSETABITEM = 3087,
	DUI_TABMSG_LBCLICK = 3080,
	DUI_TABMSG_LDBCLICK = 3081,
	DUI_TABMSG_MOUSEMOVE = 3086,
	DUI_TABMSG_PRECLOSE = 3085,
	DUI_TABMSG_RBCLICK = 3082,
	DUI_TABMSG_SCROLL = 3073,
	DUI_TABMSG_SELCHANGED = 3074,
	DUI_TABMSG_SELCHANGING = 3075,
	DUI_TABMSG_SELIDCHANGED = 3078 
};

struct __declspec(uuid("307dffd3-f593-4c30-b982-6965c1b3c89b")) _IDUITabCtrlEvents : IDispatch
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

struct __declspec(uuid("965dda96-37fc-42ee-b19f-c24dcb97d7de")) IDUITabCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AppendItem(BSTR strName, long nID, BSTR strText, struct IDUITabCtrlItem **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItem(short nIndex, BSTR strName, long nID, BSTR strText, struct IDUITabCtrlItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByIndex(short nIndex, struct IDUITabCtrlItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByName(BSTR strName, struct IDUITabCtrlItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByID(long nID, struct IDUITabCtrlItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUITabCtrlItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByIndex(short nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;
	virtual HRESULT __stdcall raw_AppendButton(BSTR strName, long nID, BSTR strText, struct IDUITabButton **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertButton(short nIndex, BSTR strName, long nID, BSTR strText, struct IDUITabButton **pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonByName(BSTR strName, struct IDUITabButton **pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonByID(long nID, struct IDUITabButton **pResult) = 0;
	virtual HRESULT __stdcall raw_GetPreDefineBtnByID(enum DUITABCTRL_BTN_ID nID, struct IDUITabButton **pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveButton(struct IDUITabButton *pButton, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveButtonByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveButtonByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllButtons() = 0;
	virtual HRESULT __stdcall raw_SetScrollPerStep(short nScroll  ) = 0;
	virtual HRESULT __stdcall raw_GetScrollPerStep(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectedItem(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItem(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetControlID(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetControlID(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemsRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableItem(long nIdIndex, VARIANT_BOOL bEnable, VARIANT_BOOL bByIndex  ) = 0;
	virtual HRESULT __stdcall raw_IsEnableItem(long nIdIndex, VARIANT_BOOL bByIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHaveCloseButton(VARIANT_BOOL bHaveButton, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsItemHaveCloseButton(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDragable(VARIANT_BOOL bDragable  ) = 0;
	virtual HRESULT __stdcall raw_SwapItem(struct IDUITabCtrlItem *pFirst, struct IDUITabCtrlItem *pSecond  ) = 0;
	virtual HRESULT __stdcall raw_SetSelShowCloseButton(VARIANT_BOOL bHaveButton, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsSelShowCloseButton(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUITabCtrlItem * AppendItem(tstring  strName, long  nID, tstring  strText  );
	struct IDUITabCtrlItem * InsertItem(short  nIndex, tstring  strName, long  nID, tstring  strText  );
	struct IDUITabCtrlItem * GetItemByIndex(short  nIndex  );
	struct IDUITabCtrlItem * GetItemByName(tstring  strName  );
	struct IDUITabCtrlItem * GetItemByID(long  nID  );
	long  GetItemCount();
	BOOL  RemoveItem(struct IDUITabCtrlItem * pItem  );
	BOOL  RemoveItemByIndex(short  nIndex  );
	BOOL  RemoveItemByName(tstring  strName  );
	BOOL  RemoveItemByID(long  nID  );
	void RemoveAllItems();
	struct IDUITabButton * AppendButton(tstring  strName, long  nID, tstring  strText  );
	struct IDUITabButton * InsertButton(short  nIndex, tstring  strName, long  nID, tstring  strText  );
	struct IDUITabButton * GetButtonByName(tstring  strName  );
	struct IDUITabButton * GetButtonByID(long  nID  );
	struct IDUITabButton * GetPreDefineBtnByID(enum DUITABCTRL_BTN_ID  nID  );
	long  GetButtonCount();
	BOOL  RemoveButton(struct IDUITabButton * pButton  );
	BOOL  RemoveButtonByName(tstring  strName  );
	BOOL  RemoveButtonByID(long  nID  );
	void RemoveAllButtons();
	void SetScrollPerStep(short  nScroll  );
	short  GetScrollPerStep();
	void SetSelectedItem(short  nIndex  );
	short  GetSelectedItem();
	void SetControlID(short  nIndex  );
	short  GetControlID();
	struct SkinRect  GetItemsRect();
	void EnableItem(long  nIdIndex, BOOL  bEnable, BOOL  bByIndex  );
	BOOL  IsEnableItem(long  nIdIndex, BOOL  bByIndex  );
	void SetItemHaveCloseButton(BOOL  bHaveButton, BOOL  bRedraw  );
	BOOL  IsItemHaveCloseButton();
	void SetDragable(BOOL  bDragable  );
	void SwapItem(struct IDUITabCtrlItem * pFirst, struct IDUITabCtrlItem * pSecond  );
	void SetSelShowCloseButton(BOOL  bHaveButton, BOOL  bRedraw  );
	BOOL  IsSelShowCloseButton();
};

struct __declspec(uuid("efe34b1e-bad6-4ff1-9ba7-506933730f90")) IDUITabCtrlItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetName(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_GetName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTipText  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStatus(enum DUITABITEM_STATE eStatus  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphic(OLE_HANDLE hBitmap, enum DUITABITEM_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphic(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconFilePath(BSTR sFilePath  ) = 0;
	virtual HRESULT __stdcall raw_GetIconFilePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIcon(OLE_HANDLE hIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetIcon(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCustomBack(struct IDUIImageBase *pDUIImageBase, enum DUITABITEM_STATE eState, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetCustomBack(enum DUITABITEM_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetIndex(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHaveCloseButton(VARIANT_BOOL bHaveButton, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsHaveCloseButton(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWidth(long nWidth, VARIANT_BOOL bReCalc  ) = 0;
	virtual HRESULT __stdcall raw_GetWidth(long *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetName(tstring  strName  );
	tstring  GetName();
	void SetText(tstring  strText  );
	tstring  GetText();
	void SetID(long  nID  );
	long  GetID();
	void SetTooltip(tstring  strTipText  );
	tstring  GetTooltip();
	void SetVisible(BOOL  bVisible  );
	BOOL  IsVisible();
	void SetStatus(enum DUITABITEM_STATE  eStatus  );
	struct SkinRect  GetRect();
	void SetGraphic(OLE_HANDLE  hBitmap, enum DUITABITEM_STATE  eState = (DUITABITEM_STATE)0  );
	OLE_HANDLE  GetGraphic();
	void SetIconFilePath(tstring  sFilePath  );
	tstring  GetIconFilePath();
	void SetIcon(OLE_HANDLE  hIcon  );
	OLE_HANDLE  GetIcon();
	void SetCustomBack(struct IDUIImageBase * pDUIImageBase, enum DUITABITEM_STATE  eState, BOOL  bRedraw  );
	struct IDUIImageBase * GetCustomBack(enum DUITABITEM_STATE  eState  );
	long  GetIndex();
	void SetHaveCloseButton(BOOL  bHaveButton, BOOL  bRedraw  );
	BOOL  IsHaveCloseButton();
	void SetWidth(long  nWidth, BOOL  bReCalc  );
	long  GetWidth();
};

struct __declspec(uuid("d7701a5b-6816-4b7a-9e3f-6c3d3e49c133")) IDUITabButton : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetName(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_GetName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTipText  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStatus(enum DUITABITEM_STATE eStatus  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSize(struct SkinSize sz  ) = 0;
	virtual HRESULT __stdcall raw_GetSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOffset(struct SkinSize sz  ) = 0;
	virtual HRESULT __stdcall raw_GetOffset(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpaceWithBlind(short nSpace  ) = 0;
	virtual HRESULT __stdcall raw_GetSpaceWithBlind(short *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetName(tstring  strName  );
	tstring  GetName();
	void SetID(long  nID  );
	long  GetID();
	void SetTooltip(tstring  strTipText  );
	tstring  GetTooltip();
	void SetVisible(BOOL  bVisible  );
	BOOL  IsVisible();
	void SetStatus(enum DUITABITEM_STATE  eStatus  );
	struct SkinRect  GetRect();
	void SetSize(struct SkinSize  sz  );
	struct SkinSize  GetSize();
	void SetOffset(struct SkinSize  sz  );
	struct SkinSize  GetOffset();
	void SetSpaceWithBlind(short  nSpace  );
	short  GetSpaceWithBlind();
};

struct __declspec(uuid("972e6566-0d32-47dc-b377-0f12a5fe73de")) _IDUITabCtrlItemEvents : IDispatch
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

struct __declspec(uuid("e347d012-d23b-42fc-b286-9666e2ce04e2")) _IDUITabButtonEvents : IDispatch
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

enum DUI_TBMSG
{ 
	DUITB_ITEM_COMMAND = 3336,
	DUITB_ITEM_LBUTTONDOWN = 3331,
	DUITB_ITEM_LBUTTONUP = 3332,
	DUITB_MOREBTN_COMMAND = 3335,
	DUITB_MOREBTN_LBUTTONDOWN = 3329,
	DUITB_MOREBTN_LBUTTONUP = 3330,
	DUITB_PUSHEX_COMMAND = 3337,
	DUITB_PUSHEX_LBUTTONDOWN = 3333,
	DUITB_PUSHEX_LBUTTONUP = 3334 
};

struct __declspec(uuid("3978736b-af48-4a8d-ba3f-364ba69edb11")) _IDUIToolBarEvents : IDispatch
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

struct __declspec(uuid("330453eb-d8aa-49d8-b9b2-9908ebb0efc2")) IDUIToolBar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InsertItem(short nIndex, long nID, BSTR strText, long nGroupID, enum DUI_TBITEM_STYLE eStyle, BSTR strTooltip, struct IDUIToolBarItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(long nID, BSTR strText, long nGroupID, enum DUI_TBITEM_STYLE eStyle, BSTR strTooltip, struct IDUIToolBarItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByIndex(short nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;
	virtual HRESULT __stdcall raw_GetItem(long nID, struct IDUIToolBarItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUIToolBarItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMoreButton(struct IDUIToolBarMoreButton **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByStyle(enum DUI_TBITEM_STYLE eStyle, long nID, struct IDUIToolBarItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoSize(VARIANT_BOOL bAutoSize, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsAutoSize(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetShowText(VARIANT_BOOL bShowText, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsShowText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(long nHeight, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemWidth(long nWidth, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetItemWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemSpace(long nSpace, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetItemSpace(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconSize(struct SkinSize size, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetIconSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_CancelGroupRadio(long nGnGroupID, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIToolBarItemBase * InsertItem(short  nIndex, long  nID, tstring  strText, long  nGroupID, enum DUI_TBITEM_STYLE  eStyle, tstring  strTooltip  );
	struct IDUIToolBarItemBase * AppendItem(long  nID, tstring  strText, long  nGroupID, enum DUI_TBITEM_STYLE  eStyle, tstring  strTooltip  );
	BOOL  RemoveItemByID(long  nID  );
	BOOL  RemoveItemByIndex(short  nIndex  );
	void RemoveAllItems();
	struct IDUIToolBarItemBase * GetItem(long  nID  );
	struct IDUIToolBarItemBase * GetAt(short  nIndex  );
	long  GetItemCount();
	struct IDUIToolBarMoreButton * GetMoreButton();
	struct IDUIToolBarItemBase * GetItemByStyle(enum DUI_TBITEM_STYLE  eStyle, long  nID  );
	void SetAutoSize(BOOL  bAutoSize, BOOL  bRedraw  );
	BOOL  IsAutoSize();
	void SetShowText(BOOL  bShowText, BOOL  bRedraw  );
	BOOL  IsShowText();
	void SetItemHeight(long  nHeight, BOOL  bRedraw  );
	long  GetItemHeight();
	void SetItemWidth(long  nWidth, BOOL  bRedraw  );
	long  GetItemWidth();
	void SetItemSpace(long  nSpace, BOOL  bRedraw  );
	long  GetItemSpace();
	void SetIconSize(struct SkinSize  size, BOOL  bRedraw  );
	struct SkinSize  GetIconSize();
	BOOL  CancelGroupRadio(long  nGnGroupID  );
};

enum DUI_TBITEM_STYLE
{ 
	TBITEM_STYLE_CHECK = 3,
	TBITEM_STYLE_CUSTOM = 1,
	TBITEM_STYLE_LAST = 6,
	TBITEM_STYLE_PUSH = 2,
	TBITEM_STYLE_PUSHEX = 5,
	TBITEM_STYLE_RADIO = 4,
	TBITEM_STYLE_SEPARATOR = 0 
};

struct __declspec(uuid("13ac2104-6224-45f1-acab-1332c31db9af")) IDUIToolBarItemBase : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSize(int nWidth, int nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetSize(int *nWidth, int *nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetStyle(enum DUI_TBITEM_STYLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pObjPtr  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetID(long  nID  );
	long  GetID();
	void SetSize(int  nWidth, int  nHeight  );
	void GetSize(int * nWidth, int * nHeight  );
	enum DUI_TBITEM_STYLE  GetStyle();
	void SetObjPtr(OLE_HANDLE  pObjPtr  );
};

struct __declspec(uuid("c73993ae-62a7-4bd7-90ec-60ee60bb9a9b")) IDUIToolBarMoreButton : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetSize(int nWidth, int nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetSize(int *nWidth, int *nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUI_TBITEM_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUI_TBITEM_STATE *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetSize(int  nWidth, int  nHeight  );
	void GetSize(int * nWidth, int * nHeight  );
	void SetVisible(BOOL  bVisible, BOOL  bRedraw  );
	BOOL  IsVisible();
	void SetState(enum DUI_TBITEM_STATE  eState  );
	enum DUI_TBITEM_STATE  GetState();
};

enum DUI_TBITEM_STATE
{ 
	TBITEM_STATE_DISABLED = 3,
	TBITEM_STATE_HIGHLIGHT = 1,
	TBITEM_STATE_LAST = 5,
	TBITEM_STATE_NORMAL = 0,
	TBITEM_STATE_PRESSED = 2,
	TBITEM_STATE_SELECTED = 4 
};

struct __declspec(uuid("77a87fa6-4dee-4cf7-a1ed-a03029590b94")) _IDUIToolBarItemBaseEvents : IDispatch
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

struct __declspec(uuid("275ab4a8-c582-4511-adea-1f4fed4cd992")) _IDUIToolBarButtonEvents : IDispatch
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

struct __declspec(uuid("e44fad6d-9cf1-40ba-a229-206dd2775354")) IDUIToolBarButton : IDUIToolBarItemBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphic(OLE_HANDLE hBmp, VARIANT_BOOL bIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphic(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUI_TBITEM_STATE eState, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUI_TBITEM_STATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDisableGraphic(OLE_HANDLE hBmp, VARIANT_BOOL bIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetText(tstring  strText  );
	tstring  GetText();
	void SetData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetData();
	void SetGraphic(OLE_HANDLE  hBmp, BOOL  bIcon  );
	OLE_HANDLE  GetGraphic();
	void SetState(enum DUI_TBITEM_STATE  eState, BOOL  bRedraw = TRUE  );
	enum DUI_TBITEM_STATE  GetState();
	void SetTooltip(tstring  strTooltip  );
	tstring  GetTooltip();
	void SetDisableGraphic(OLE_HANDLE  hBmp, BOOL  bIcon  );
	struct SkinRect  GetRect();
};

struct __declspec(uuid("504eab65-63cf-4e17-9ee5-e1db6e9c7a2d")) _IDUIToolBarCheckButtonEvents : IDispatch
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

struct __declspec(uuid("1157617f-b8f2-490c-bb83-bd0436a772cf")) IDUIToolBarCheckButton : IDUIToolBarButton
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetCheck(VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_GetCheck(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetCheck(BOOL  bCheck  );
	BOOL  GetCheck();
};

struct __declspec(uuid("262ec41c-b02d-4065-9428-6a5e6684f06e")) _IDUIToolBarMoreButtonEvents : IDispatch
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

struct __declspec(uuid("e25eec9d-7962-429e-95d7-39cea829b048")) _IDUIToolBarRadioButtonEvents : IDispatch
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

struct __declspec(uuid("5ea6dd29-42cd-405d-b5d3-3538ea134c6a")) IDUIToolBarRadioButton : IDUIToolBarButton
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetGroupID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetGroupID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRadio() = 0;
	virtual HRESULT __stdcall raw_GetValue(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CancelGroupRadio() = 0;

	//
	//Method Wrapper
	//
	void SetGroupID(long  nID  );
	long  GetGroupID();
	void SetRadio();
	BOOL  GetValue();
	void CancelGroupRadio();
};

struct __declspec(uuid("1faa37cb-f115-48ab-a4d3-a658868ba693")) _IDUIToolBarPushButtonEvents : IDispatch
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

struct __declspec(uuid("cf248ae2-816c-4837-952c-d3384ac83380")) IDUIToolBarPushButton : IDUIToolBarButton
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

struct __declspec(uuid("b0b437e3-b580-4a98-b864-e9248037bf22")) _IDUIToolBarPushExButtonEvents : IDispatch
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

struct __declspec(uuid("3eaac027-2e9c-48ac-8a27-5625cb136a1d")) IDUIToolBarPushExButton : IDUIToolBarPushButton
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSize(int nWidth, int nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetSize(int *nWidth, int *nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetStyle(enum DUI_TBITEM_STYLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pObjPtr  ) = 0;
	virtual HRESULT __stdcall raw_SetText(BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphic(OLE_HANDLE hBmp, VARIANT_BOOL bIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphic(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUI_TBITEM_STATE eState, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUI_TBITEM_STATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTooltip(BSTR strTooltip  ) = 0;
	virtual HRESULT __stdcall raw_GetTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDisableGraphic(OLE_HANDLE hBmp, VARIANT_BOOL bIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBtnExId(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetBtnExId(long *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetID(long  nID  );
	long  GetID();
	void SetSize(int  nWidth, int  nHeight  );
	void GetSize(int * nWidth, int * nHeight  );
	enum DUI_TBITEM_STYLE  GetStyle();
	void SetObjPtr(OLE_HANDLE  pObjPtr  );
	BOOL  SetText(tstring  strText  );
	tstring  GetText();
	void SetData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetData();
	void SetGraphic(OLE_HANDLE  hBmp, BOOL  bIcon  );
	OLE_HANDLE  GetGraphic();
	void SetState(enum DUI_TBITEM_STATE  eState, BOOL  bRedraw = TRUE  );
	enum DUI_TBITEM_STATE  GetState();
	void SetTooltip(tstring  strTooltip  );
	tstring  GetTooltip();
	void SetDisableGraphic(OLE_HANDLE  hBmp, BOOL  bIcon  );
	struct SkinRect  GetRect();
	void SetBtnExId(long  nID  );
	long  GetBtnExId();
};

struct __declspec(uuid("ebab06c3-6d72-42fb-b067-6b31629c4666")) _IDUIStarCtrlEvents : IDispatch
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

struct __declspec(uuid("795a2ffc-77b6-4c61-9fe2-100bab616958")) IDUIStarCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetFrames(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFrames(long nFrames, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCurrPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCurrPos(long nPos, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsCanSelStar(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCanSelStar(VARIANT_BOOL bCanSelStar  ) = 0;

	//
	//Method Wrapper
	//
	long  GetFrames();
	BOOL  SetFrames(long  nFrames, BOOL  bRedraw  );
	long  GetCurrPos();
	BOOL  SetCurrPos(long  nPos, BOOL  bRedraw  );
	BOOL  IsCanSelStar();
	void SetCanSelStar(BOOL  bCanSelStar  );
};

struct __declspec(uuid("fe0d0ae1-5783-4e7b-b754-ffbb79853e2a")) _IDUIHwndObjEvents : IDispatch
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

struct __declspec(uuid("d353b642-3ef3-4df3-a391-d08838f0fadd")) IDUIHwndObj : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetSafeHwnd(short nIndex, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_IsExist(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Attach(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Detach(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_MoveHwndObjCtrls(struct SkinRect rect, VARIANT_BOOL bPopup  ) = 0;
	virtual HRESULT __stdcall raw_ShowWindow(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowWindowByIndex(short nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCurHwnd(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_HideCurWindow(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowCurWindow(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetClipIntersect(VARIANT_BOOL bClip  ) = 0;
	virtual HRESULT __stdcall raw_IsClipIntersect(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DetachAll() = 0;
	virtual HRESULT __stdcall raw_DestroyFloatWindow() = 0;

	//
	//Method Wrapper
	//
	OLE_HANDLE  GetSafeHwnd(short  nIndex  );
	BOOL  IsExist(OLE_HANDLE  hWnd  );
	BOOL  Attach(OLE_HANDLE  hWnd  );
	BOOL  Detach(OLE_HANDLE  hWnd  );
	void MoveHwndObjCtrls(struct SkinRect  rect, BOOL  bPopup  );
	BOOL  ShowWindow(OLE_HANDLE  hWnd  );
	BOOL  ShowWindowByIndex(short  nIndex  );
	OLE_HANDLE  GetCurHwnd();
	BOOL  HideCurWindow();
	BOOL  ShowCurWindow();
	void SetClipIntersect(BOOL  bClip  );
	BOOL  IsClipIntersect();
	void DetachAll();
	void DestroyFloatWindow();
};

enum DUI_CBNOTIFY
{ 
	DUI_CBN_CLICKBUTTON = 2827,
	DUI_CBN_CLICKEDIT = 2828,
	DUI_CBN_CLOSEUP = 2824,
	DUI_CBN_DBLCLK = 2818,
	DUI_CBN_DROPDOWN = 2823,
	DUI_CBN_EDITCHANGE = 2821,
	DUI_CBN_EDITUPDATE = 2822,
	DUI_CBN_ERRSPACE = 2816,
	DUI_CBN_KILLFOCUS = 2820,
	DUI_CBN_SELCHANGE = 2817,
	DUI_CBN_SELECTED = 2829,
	DUI_CBN_SELENDCANCEL = 2826,
	DUI_CBN_SELENDOK = 2825,
	DUI_CBN_SETFOCUS = 2819 
};

struct __declspec(uuid("62ced240-17ee-49b1-bf83-97493f870742")) _IDUIComboBoxEvents : IDispatch
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

struct __declspec(uuid("96362c75-f86d-40c2-898a-9976cf932201")) IDUIComboBox : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetEditTooltip(BSTR strTooltip, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetEditTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonTooltip(BSTR strTooltip, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonTooltip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCurrText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetCurrText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDefText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetDefText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_AddItem(BSTR strText, long nID, OLE_HANDLE hInfo, long *pResult) = 0;
	virtual HRESULT __stdcall raw_AddItemWithImage(BSTR strText, BSTR strPath, long nID, OLE_HANDLE hInfo, long *pResult) = 0;
	virtual HRESULT __stdcall raw_AddItemWithIcon(BSTR strText, OLE_HANDLE hIcon, long nID, OLE_HANDLE hInfo, long *pResult) = 0;
	virtual HRESULT __stdcall raw_AddItemWithImgLst(BSTR strText, long nID, long nImageIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemText(long nIndex, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemText(long nIndex, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAt(long nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPopupList(IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageList(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageList(OLE_HANDLE hImageList  ) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderDrawColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetBorderDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBorderImage(short nIndex, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBorderImage(short nIndex, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetCurSel(long nSelect  ) = 0;
	virtual HRESULT __stdcall raw_GetCurSel(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPopupList(IDispatch *pPoputList  ) = 0;
	virtual HRESULT __stdcall raw_SetMaxItemCount(long nItemCount  ) = 0;
	virtual HRESULT __stdcall raw_GetMaxItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(short nIndex, OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(short nIndex, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTooltip(long nIndex, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTooltip(long nIndex, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowPopupList(VARIANT_BOOL bShow  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetEditTooltip(tstring  strTooltip  );
	tstring  GetEditTooltip();
	BOOL  SetButtonTooltip(tstring  strTooltip  );
	tstring  GetButtonTooltip();
	void SetCurrText(tstring  strText  );
	tstring  GetCurrText();
	void SetDefText(tstring  strText  );
	tstring  GetDefText();
	long  AddItem(tstring  strText, long  nID, OLE_HANDLE  hInfo  );
	long  AddItemWithImage(tstring  strText, tstring  strPath, long  nID, OLE_HANDLE  hInfo  );
	long  AddItemWithIcon(tstring  strText, OLE_HANDLE  hIcon, long  nID, OLE_HANDLE  hInfo  );
	long  AddItemWithImgLst(tstring  strText, long  nID, long  nImageIndex  );
	BOOL  SetItemText(long  nIndex, tstring  strText  );
	tstring  GetItemText(long  nIndex  );
	BOOL  RemoveAt(long  nIndex  );
	BOOL  RemoveAll();
	IDispatch * GetPopupList();
	OLE_HANDLE  GetImageList();
	void SetImageList(OLE_HANDLE  hImageList  );
	long  GetItemCount();
	void SetBorderDrawColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetBorderDrawColor();
	BOOL  SetBorderImage(short  nIndex, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetBorderImage(short  nIndex  );
	void SetCurSel(long  nSelect  );
	long  GetCurSel();
	void SetPopupList(IDispatch * pPoputList  );
	void SetMaxItemCount(long  nItemCount  );
	long  GetMaxItemCount();
	void SetData(short  nIndex, OLE_HANDLE  hData  );
	OLE_HANDLE  GetData(short  nIndex  );
	BOOL  SetItemTooltip(long  nIndex, tstring  strText  );
	tstring  GetItemTooltip(long  nIndex  );
	void ShowPopupList(BOOL  bShow  );
};

enum DUI_PMMSG
{ 
	DUIPM_COMMAND = 5152,
	DUIPM_UPDATE_COMMAND_UI = 5153 
};

struct __declspec(uuid("847b04a3-b9cd-4533-b3e2-77659aa2aaff")) _IDUIPopupMenuEvents : IDispatch
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

struct __declspec(uuid("060953cf-29f4-44b2-803c-a98160e6125e")) IDUIPopupMenu : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_TrackPopupMenu(enum DUI_TPMSTYLE eFlags, short nX, short nY, OLE_HANDLE hWnd  ) = 0;
	virtual HRESULT __stdcall raw_CreatePopupMenu(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendMenu(long nID, BSTR strName, BSTR strText, long nGroupID, enum DUI_MENUITEM_STYLE eStyle, VARIANT_BOOL bIsPopupSytle, VARIANT_BOOL bRecalculate, struct IDUIMenuItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertMenu(short nIndex, long nID, BSTR strName, BSTR strText, long nGroupID, enum DUI_MENUITEM_STYLE eStyle, VARIANT_BOOL bIsPopupSytle, VARIANT_BOOL bRecalculate, struct IDUIMenuItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveMenu(long nItem, VARIANT_BOOL bByPos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenu(long nItem, VARIANT_BOOL bByPos, enum DUI_MENUITEM_STYLE eStyle, struct IDUIMenuItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubMenu(short nIndex, struct IPopMenu **pResult) = 0;
	virtual HRESULT __stdcall raw_IsMenuVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMenuPos(short x, short y  ) = 0;
	virtual HRESULT __stdcall raw_GetMenuTextByIndex(short nIndex, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuItemID(short nIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOwnerWnd(OLE_HANDLE hWnd  ) = 0;
	virtual HRESULT __stdcall raw_SetMenuRect(struct SkinRect rect  ) = 0;
	virtual HRESULT __stdcall raw_SetOwnerCtrl(struct IDUIControlBase *pOwnerCtrl  ) = 0;
	virtual HRESULT __stdcall raw_GetOwnerCtrl(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemVisible(long nItem, VARIANT_BOOL bByPos, VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_EnableMenuItem(long nItem, VARIANT_BOOL bByPos, VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetEventRecieve(struct IDirectUI *pDirectUI  ) = 0;
	virtual HRESULT __stdcall raw_GetEventRecieve(struct IDirectUI **pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoCheck(VARIANT_BOOL bAutoCheck  ) = 0;
	virtual HRESULT __stdcall raw_GetAutoCheck(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_TrackPopupMenuEx(enum DUI_TPMSTYLE eFlags, short nX, short nY, OLE_HANDLE hWnd, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetUseStandardMenu(VARIANT_BOOL bAutoCheck  ) = 0;
	virtual HRESULT __stdcall raw_GetUseStandardMenu(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStandardMenuHanlde(OLE_HANDLE hMenuHandle  ) = 0;
	virtual HRESULT __stdcall raw_GetStandardMenuHanlde(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderType(enum DUI_RENDERENGINE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderType(enum DUI_RENDERENGINE_TYPE eRenderType  ) = 0;
	virtual HRESULT __stdcall raw_SetMenuVisible(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_SetDrawColor(VARIANT_BOOL bDrawColor  ) = 0;

	//
	//Method Wrapper
	//
	void TrackPopupMenu(enum DUI_TPMSTYLE  eFlags, short  nX, short  nY, OLE_HANDLE  hWnd  );
	OLE_HANDLE  CreatePopupMenu();
	struct IDUIMenuItemBase * AppendMenu(long  nID, tstring  strName, tstring  strText, long  nGroupID, enum DUI_MENUITEM_STYLE  eStyle, BOOL  bIsPopupSytle, BOOL  bRecalculate  );
	struct IDUIMenuItemBase * InsertMenu(short  nIndex, long  nID, tstring  strName, tstring  strText, long  nGroupID, enum DUI_MENUITEM_STYLE  eStyle, BOOL  bIsPopupSytle, BOOL  bRecalculate  );
	BOOL  RemoveMenu(long  nItem, BOOL  bByPos  );
	struct IDUIMenuItemBase * GetMenu(long  nItem, BOOL  bByPos, enum DUI_MENUITEM_STYLE  eStyle  );
	long  GetMenuItemCount();
	struct IPopMenu * GetSubMenu(short  nIndex  );
	BOOL  IsMenuVisible();
	OLE_HANDLE  GetHandle();
	void SetMenuPos(short  x, short  y  );
	tstring  GetMenuTextByIndex(short  nIndex  );
	long  GetMenuItemID(short  nIndex  );
	void SetOwnerWnd(OLE_HANDLE  hWnd  );
	void SetMenuRect(struct SkinRect  rect  );
	void SetOwnerCtrl(struct IDUIControlBase * pOwnerCtrl  );
	struct IDUIControlBase * GetOwnerCtrl();
	void SetItemVisible(long  nItem, BOOL  bByPos, BOOL  bVisible  );
	void EnableMenuItem(long  nItem, BOOL  bByPos, BOOL  bEnable  );
	void SetEventRecieve(struct IDirectUI * pDirectUI  );
	struct IDirectUI * GetEventRecieve();
	void SetAutoCheck(BOOL  bAutoCheck  );
	BOOL  GetAutoCheck();
	long  TrackPopupMenuEx(enum DUI_TPMSTYLE  eFlags, short  nX, short  nY, OLE_HANDLE  hWnd  );
	void SetUseStandardMenu(BOOL  bAutoCheck  );
	BOOL  GetUseStandardMenu();
	void SetStandardMenuHanlde(OLE_HANDLE  hMenuHandle  );
	OLE_HANDLE  GetStandardMenuHanlde();
	enum DUI_RENDERENGINE_TYPE  GetRenderType();
	void SetRenderType(enum DUI_RENDERENGINE_TYPE  eRenderType  );
	void SetMenuVisible(BOOL  bShow  );
	void SetDrawColor(BOOL  bDrawColor  );
};

enum DUI_TPMSTYLE
{ 
	DUI_TPM_BOTTOMALIGN = 3,
	DUI_TPM_CENTERALIGN = 0,
	DUI_TPM_LEFTALIGN = 1,
	DUI_TPM_RIGHTALIGN = 2,
	DUI_TPM_TOPALIGN = 4,
	DUI_TPM_VCENTERALIGN = 5 
};

enum DUI_MENUITEM_STYLE
{ 
	MENUITEMSTYLE_CHECK = 2,
	MENUITEMSTYLE_LAST = 4,
	MENUITEMSTYLE_NORMAL = 0,
	MENUITEMSTYLE_RADIO = 3,
	MENUITEMSTYLE_SEPARATOR = 1 
};

struct __declspec(uuid("1043b34a-f803-4cf3-99f7-800823c77fa4")) IDUIMenuItemBase : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStyle(enum DUI_MENUITEM_STYLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pObjPtr  ) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_GetVisible(VARIANT_BOOL *pbResult  ) = 0;

	//
	//Method Wrapper
	//
	void SetID(long  nID  );
	long  GetID();
	enum DUI_MENUITEM_STYLE  GetStyle();
	void SetObjPtr(OLE_HANDLE  pObjPtr  );
	void SetVisible(BOOL  bVisible  );
	void GetVisible(VARIANT_BOOL * pbResult  );
};

struct __declspec(uuid("d00e7e9b-3aad-4e6c-a2c2-fb36f09fc29a")) IPopMenu : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_TrackPopupMenu(enum DUI_TPMSTYLE eFlags, short nX, short nY, OLE_HANDLE hWnd  ) = 0;
	virtual HRESULT __stdcall raw_AppendMenu(long nID, BSTR strName, BSTR strText, long nGroupID, enum DUI_MENUITEM_STYLE eStyle, VARIANT_BOOL bIsPopupStyle, VARIANT_BOOL bRecalculate, struct IDUIMenuItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertMenu(short nIndex, long nID, BSTR strName, BSTR strText, long nGroupID, enum DUI_MENUITEM_STYLE eStyle, VARIANT_BOOL bIsPopupStyle, VARIANT_BOOL bRecalculate, struct IDUIMenuItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveMenu(long nItem, VARIANT_BOOL bByPos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenu(long nItem, VARIANT_BOOL bByPos, enum DUI_MENUITEM_STYLE eStyle, struct IDUIMenuItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubMenu(short nIndex, struct IPopMenu **pResult) = 0;
	virtual HRESULT __stdcall raw_IsMenuVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMenuPos(short x, short y  ) = 0;
	virtual HRESULT __stdcall raw_GetMenuTextByIndex(short nIndex, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMenuItemID(short nIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemVisible(long nItem, VARIANT_BOOL bByPos, VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_EnableMenuItem(long nItem, VARIANT_BOOL bByPos, VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_SetMenuBar(OLE_HANDLE hMenuBar  ) = 0;
	virtual HRESULT __stdcall raw_GetMenuBar(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_UnSelRadioGroup(long nMenuBar  ) = 0;

	//
	//Method Wrapper
	//
	void TrackPopupMenu(enum DUI_TPMSTYLE  eFlags, short  nX, short  nY, OLE_HANDLE  hWnd  );
	struct IDUIMenuItemBase * AppendMenu(long  nID, tstring  strName, tstring  strText, long  nGroupID, enum DUI_MENUITEM_STYLE  eStyle, BOOL  bIsPopupStyle, BOOL  bRecalculate  );
	struct IDUIMenuItemBase * InsertMenu(short  nIndex, long  nID, tstring  strName, tstring  strText, long  nGroupID, enum DUI_MENUITEM_STYLE  eStyle, BOOL  bIsPopupStyle, BOOL  bRecalculate  );
	BOOL  RemoveMenu(long  nItem, BOOL  bByPos  );
	struct IDUIMenuItemBase * GetMenu(long  nItem, BOOL  bByPos, enum DUI_MENUITEM_STYLE  eStyle  );
	long  GetMenuItemCount();
	struct IPopMenu * GetSubMenu(short  nIndex  );
	BOOL  IsMenuVisible();
	OLE_HANDLE  GetHandle();
	void SetMenuPos(short  x, short  y  );
	tstring  GetMenuTextByIndex(short  nIndex  );
	long  GetMenuItemID(short  nIndex  );
	void SetItemVisible(long  nItem, BOOL  bByPos, BOOL  bVisible  );
	void EnableMenuItem(long  nItem, BOOL  bByPos, BOOL  bEnable  );
	void SetMenuBar(OLE_HANDLE  hMenuBar  );
	OLE_HANDLE  GetMenuBar();
	void UnSelRadioGroup(long  nMenuBar  );
};

struct __declspec(uuid("09fac616-5c11-4586-99eb-4f95bf210715")) _IPopMenuEvents : IDispatch
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

struct __declspec(uuid("32ee65fd-2c6c-4da3-904c-74922c81d5a0")) _IDUIMenuItemBaseEvents : IDispatch
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

struct __declspec(uuid("a12773cb-c250-455b-8f96-416a22fe40e2")) _IDUIMenuItemEvents : IDispatch
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

struct __declspec(uuid("037a0aa9-4daf-4d1e-be4a-523e27dff7ad")) IDUIMenuItem : IDUIMenuItemBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pstrResult  ) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE pData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *phResult  ) = 0;
	virtual HRESULT __stdcall raw_SetHotKey(BSTR strHotKey  ) = 0;
	virtual HRESULT __stdcall raw_GetHotKey(BSTR *pstrResult  ) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUI_MENUITEM_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUI_MENUITEM_STATE *peResult  ) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	void GetText(BSTR * pstrResult  );
	void SetData(OLE_HANDLE  pData  );
	void GetData(OLE_HANDLE * phResult  );
	void SetHotKey(tstring  strHotKey  );
	void GetHotKey(BSTR * pstrResult  );
	void SetState(enum DUI_MENUITEM_STATE  eState  );
	void GetState(enum DUI_MENUITEM_STATE * peResult  );
};

enum DUI_MENUITEM_STATE
{ 
	MENUITEMSTATE_DISABLED = 3,
	MENUITEMSTATE_HIGHLIGHT = 1,
	MENUITEMSTATE_LAST = 5,
	MENUITEMSTATE_NORMAL = 0,
	MENUITEMSTATE_PRESSED = 2,
	MENUITEMSTATE_SELECTED = 4 
};

struct __declspec(uuid("8155f9cb-a975-4302-9a74-f771804440fa")) _IDUIMenuPushItemEvents : IDispatch
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

struct __declspec(uuid("61235c93-2501-4f7e-b17a-5ca5a63bb4ba")) IDUIMenuPushItem : IDUIMenuItem
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetGraphic(BSTR strImage  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphic(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPopStyle(VARIANT_BOOL bIsPopupStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetPopStyle(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicFromImageBase(struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_SetGraphicBitmap(OLE_HANDLE hBitmap  ) = 0;

	//
	//Method Wrapper
	//
	void SetGraphic(tstring  strImage  );
	tstring  GetGraphic();
	void SetPopStyle(BOOL  bIsPopupStyle  );
	BOOL  GetPopStyle();
	void SetGraphicFromImageBase(struct IDUIImageBase * pImageBase  );
	void SetGraphicBitmap(OLE_HANDLE  hBitmap  );
};

struct __declspec(uuid("e1e9969b-4085-4bde-a107-57aadc173057")) _IDUIMenuCheckItemEvents : IDispatch
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

struct __declspec(uuid("9cd79df5-9138-4c3c-87ea-c6f87503a660")) IDUIMenuCheckItem : IDUIMenuItem
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetCheck(enum DUI_MENUITEM_VALUE eValue  ) = 0;
	virtual HRESULT __stdcall raw_GetCheck(enum DUI_MENUITEM_VALUE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphic(enum DUI_MENUITEM_STATE eStatus, BSTR strImage  ) = 0;
	virtual HRESULT __stdcall raw_SetGraphicBitmap(enum DUI_MENUITEM_STATE eStatus, OLE_HANDLE hBitmap  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicBitmap(enum DUI_MENUITEM_STATE eStatus, OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetCheck(enum DUI_MENUITEM_VALUE  eValue  );
	enum DUI_MENUITEM_VALUE  GetCheck();
	void SetGraphic(enum DUI_MENUITEM_STATE  eStatus, tstring  strImage  );
	void SetGraphicBitmap(enum DUI_MENUITEM_STATE  eStatus, OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetGraphicBitmap(enum DUI_MENUITEM_STATE  eStatus  );
};

enum DUI_MENUITEM_VALUE
{ 
	MENUITEMVALUE_CHECKED = 1,
	MENUITEMVALUE_LAST = 2,
	MENUITEMVALUE_UNCHECK = 0 
};

struct __declspec(uuid("d49385fe-4978-4a06-b95f-40a776b8dc38")) _IDUIMenuRadioItemEvents : IDispatch
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

struct __declspec(uuid("34158d44-8867-4d18-ba5b-9b3eafa67609")) IDUIMenuRadioItem : IDUIMenuItem
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetGroupID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetGroupID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRadio() = 0;
	virtual HRESULT __stdcall raw_GetValue(enum DUI_MENUITEM_VALUE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphic(enum DUI_MENUITEM_STATE eStatus, BSTR strImage  ) = 0;
	virtual HRESULT __stdcall raw_SetGraphicBitmap(enum DUI_MENUITEM_STATE eStatus, OLE_HANDLE hBitmap  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicBitmap(enum DUI_MENUITEM_STATE eStatus, OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetGroupID(long  nID  );
	long  GetGroupID();
	void SetRadio();
	enum DUI_MENUITEM_VALUE  GetValue();
	void SetGraphic(enum DUI_MENUITEM_STATE  eStatus, tstring  strImage  );
	void SetGraphicBitmap(enum DUI_MENUITEM_STATE  eStatus, OLE_HANDLE  hBitmap  );
	OLE_HANDLE  GetGraphicBitmap(enum DUI_MENUITEM_STATE  eStatus  );
};

struct __declspec(uuid("b8fa7fce-ad5e-47ac-bf7c-a8d0e8d963cc")) _IDUILogoObjEvents : IDispatch
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

struct __declspec(uuid("4efe6e7d-a2cd-48cb-a728-68765a3cacde")) IDUILogoObj : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetLogoImage(BSTR strFileName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DestroyLogoImage() = 0;
	virtual HRESULT __stdcall raw_SetImageHandle(OLE_HANDLE hBitmap  ) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageHandleEx(OLE_HANDLE hBitmap, long nX, long nY, long nWidth, long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUI_LOGOBJSTATE *pResult  ) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUI_LOGOBJSTATE eState  ) = 0;
	virtual HRESULT __stdcall raw_SetImageBorder(long nLeft, long nTop, long nRight, long nBottom  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetLogoImage(tstring  strFileName  );
	void DestroyLogoImage();
	void SetImageHandle(OLE_HANDLE  hBitmap  );
	BOOL  SetBackImage(struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetBackImage();
	void SetImageHandleEx(OLE_HANDLE  hBitmap, long  nX, long  nY, long  nWidth, long  nHeight  );
	void GetState(enum DUI_LOGOBJSTATE * pResult  );
	void SetState(enum DUI_LOGOBJSTATE  eState  );
	void SetImageBorder(long  nLeft, long  nTop, long  nRight, long  nBottom  );
};

enum DUI_LOGOBJSTATE
{ 
	DUI_LOGOBJ_DISABLE = 2,
	DUI_LOGOBJ_HOT = 3,
	DUI_LOGOBJ_LAST = 4,
	DUI_LOGOBJ_NORMAL = 0,
	DUI_LOGOBJ_PRESS = 1 
};

enum DUIFORMBORDER_MSG
{ 
	DUIFB_CAPTIONDBCLICK = 5632 
};

struct __declspec(uuid("210c3093-0154-4fc3-9663-e19503761b1f")) _IDUIFormBorderEvents : IDispatch
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

struct __declspec(uuid("7d458017-0d82-44ec-a6a2-d952ddeb3650")) IDUIFormBorder : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetCaption(BSTR bstrCaption, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_SetIcon(OLE_HANDLE hBitmapIcon, VARIANT_BOOL bRefresh, VARIANT_BOOL bIsIcon  ) = 0;
	virtual HRESULT __stdcall raw_SetIconByImageBase(struct IDUIImageBase *hImageBase, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_SetCaptionHeight(long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetUseSysMenu(VARIANT_BOOL bUseSysMenu  ) = 0;
	virtual HRESULT __stdcall raw_SetSysBtn(BSTR strCloseBtn, BSTR strMaxBtn, BSTR strMinBtn, BSTR strHelpBtn  ) = 0;
	virtual HRESULT __stdcall raw_SetCaptionDragable(VARIANT_BOOL bValue  ) = 0;
	virtual HRESULT __stdcall raw_DBClickCaptionMaxWnd(VARIANT_BOOL bValue  ) = 0;

	//
	//Method Wrapper
	//
	void SetCaption(tstring  bstrCaption, BOOL  bRefresh  );
	void SetIcon(OLE_HANDLE  hBitmapIcon, BOOL  bRefresh, BOOL  bIsIcon  );
	void SetIconByImageBase(struct IDUIImageBase * hImageBase, BOOL  bRefresh  );
	void SetCaptionHeight(long  nHeight  );
	void SetUseSysMenu(BOOL  bUseSysMenu  );
	void SetSysBtn(tstring  strCloseBtn, tstring  strMaxBtn, tstring  strMinBtn, tstring  strHelpBtn  );
	void SetCaptionDragable(BOOL  bValue  );
	void DBClickCaptionMaxWnd(BOOL  bValue  );
};

struct __declspec(uuid("710b5422-6f38-4b98-9dea-dec806950b4a")) _IDUITVItemBaseEvents : IDispatch
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

enum DUI_CALENDARDATE_MESSAGE
{ 
	DUI_CALENDAR_DATE_DBCLICK = 3128,
	DUI_CALENDAR_DATE_EDIT = 3129,
	DUI_CALENDAR_DATE_LCLICK = 3126,
	DUI_CALENDAR_DATE_RCLICK = 3127,
	DUI_CALENDAR_MONTH_CLICK = 3124,
	DUI_CALENDAR_YEAR_CLICK = 3125 
};

struct __declspec(uuid("e4406585-bbda-4ed7-b0c1-3f2dc72887a2")) _IDUICalendarEvents : IDispatch
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

struct __declspec(uuid("f65c8008-76d3-4c7f-911e-6a0b4727e123")) IDUICalendar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_IsAutoSize(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoSize(VARIANT_BOOL bAutoSize  ) = 0;
	virtual HRESULT __stdcall raw_GetSpace(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpace(long nSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetFixedSize(long nWidth, long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetFixedSize(long *pWidth, long *pHeight  ) = 0;
	virtual HRESULT __stdcall raw_IsBackDrawColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackDrawColor(VARIANT_BOOL bDrawColor  ) = 0;
	virtual HRESULT __stdcall raw_GetYearMonthBarHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetYearMonthBarHeight(short nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetWeekBarHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWeekBarHeight(short nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetWeekBarText(BSTR strSun, BSTR strMon, BSTR strTues, BSTR strWed, BSTR strThurs, BSTR strFri, BSTR strSat  ) = 0;
	virtual HRESULT __stdcall raw_GetWeekBarText(BSTR *pstrSun, BSTR *pstrMon, BSTR *pstrTues, BSTR *pstrWed, BSTR *pstrThurs, BSTR *pstrFri, BSTR *pstrSat  ) = 0;
	virtual HRESULT __stdcall raw_SetWeekBarTextByEnum(enum DUI_WEEKTEXT eWeekText, BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetWeekBarTextByEnum(enum DUI_WEEKTEXT eWeekText, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectedDate(struct DUI_CALENDARDATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectedDate(struct DUI_CALENDARDATE *pDate  ) = 0;
	virtual HRESULT __stdcall raw_SetWeekBarTextStyle(struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetWeekBarTextStyle(struct IDUITextStyle **ppTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_SetWeekStart(enum DUI_WEEKTEXT eWeekStart  ) = 0;
	virtual HRESULT __stdcall raw_GetWeekStart(enum DUI_WEEKTEXT *eWeekStart  ) = 0;
	virtual HRESULT __stdcall raw_SetDayTextStyle(struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetDayTextStyle(struct IDUITextStyle **ppTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_SetPreMonthDayTextStyle(struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetPreMonthDayTextStyle(struct IDUITextStyle **ppTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_SetNextMonthDayTextStyle(struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetNextMonthDayTextStyle(struct IDUITextStyle **ppTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetFocusDayImage(struct IDUIImageBase **ppImageBase  ) = 0;
	virtual HRESULT __stdcall raw_SetFocusDayImage(struct IDUIImageBase *pImageBase  ) = 0;
	virtual HRESULT __stdcall raw_IsShowFrameGrid(VARIANT_BOOL *pbShowGrid  ) = 0;
	virtual HRESULT __stdcall raw_SetShowFrameGrid(VARIANT_BOOL bShowGrid  ) = 0;
	virtual HRESULT __stdcall raw_IsShowFrameGridColor(VARIANT_BOOL *pbShowGridColor  ) = 0;
	virtual HRESULT __stdcall raw_SetShowFrameGridColor(VARIANT_BOOL bShowGridColor  ) = 0;
	virtual HRESULT __stdcall raw_SetFrameGridColor(OLE_COLOR color  ) = 0;
	virtual HRESULT __stdcall raw_GetFrameGridColor(OLE_COLOR *pColor  ) = 0;
	virtual HRESULT __stdcall raw_CancelEventDate(struct DUI_CALENDARDATE date, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_SetEventDate(struct DUI_CALENDARDATE date, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_IsEventDate(struct DUI_CALENDARDATE date, VARIANT_BOOL *bpIsEventDay  ) = 0;
	virtual HRESULT __stdcall raw_JumpToToday() = 0;
	virtual HRESULT __stdcall raw_JumpToSpecDay(short year, short month, short day  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  IsAutoSize();
	void SetAutoSize(BOOL  bAutoSize  );
	long  GetSpace();
	void SetSpace(long  nSpace  );
	void SetFixedSize(long  nWidth, long  nHeight  );
	void GetFixedSize(long * pWidth, long * pHeight  );
	BOOL  IsBackDrawColor();
	void SetBackDrawColor(BOOL  bDrawColor  );
	short  GetYearMonthBarHeight();
	void SetYearMonthBarHeight(short  nHeight  );
	short  GetWeekBarHeight();
	void SetWeekBarHeight(short  nHeight  );
	void SetWeekBarText(tstring  strSun, tstring  strMon, tstring  strTues, tstring  strWed, tstring  strThurs, tstring  strFri, tstring  strSat  );
	void GetWeekBarText(BSTR * pstrSun, BSTR * pstrMon, BSTR * pstrTues, BSTR * pstrWed, BSTR * pstrThurs, BSTR * pstrFri, BSTR * pstrSat  );
	void SetWeekBarTextByEnum(enum DUI_WEEKTEXT  eWeekText, tstring  strText  );
	tstring  GetWeekBarTextByEnum(enum DUI_WEEKTEXT  eWeekText  );
	struct DUI_CALENDARDATE  GetSelectedDate();
	void SetSelectedDate(struct DUI_CALENDARDATE * pDate  );
	void SetWeekBarTextStyle(struct IDUITextStyle * pTextStyle  );
	void GetWeekBarTextStyle(struct IDUITextStyle ** ppTextStyle  );
	void SetWeekStart(enum DUI_WEEKTEXT  eWeekStart  );
	void GetWeekStart(enum DUI_WEEKTEXT * eWeekStart  );
	void SetDayTextStyle(struct IDUITextStyle * pTextStyle  );
	void GetDayTextStyle(struct IDUITextStyle ** ppTextStyle  );
	void SetPreMonthDayTextStyle(struct IDUITextStyle * pTextStyle  );
	void GetPreMonthDayTextStyle(struct IDUITextStyle ** ppTextStyle  );
	void SetNextMonthDayTextStyle(struct IDUITextStyle * pTextStyle  );
	void GetNextMonthDayTextStyle(struct IDUITextStyle ** ppTextStyle  );
	void GetFocusDayImage(struct IDUIImageBase ** ppImageBase  );
	void SetFocusDayImage(struct IDUIImageBase * pImageBase  );
	void IsShowFrameGrid(VARIANT_BOOL * pbShowGrid  );
	void SetShowFrameGrid(BOOL  bShowGrid  );
	void IsShowFrameGridColor(VARIANT_BOOL * pbShowGridColor  );
	void SetShowFrameGridColor(BOOL  bShowGridColor  );
	void SetFrameGridColor(OLE_COLOR  color  );
	void GetFrameGridColor(OLE_COLOR * pColor  );
	void CancelEventDate(struct DUI_CALENDARDATE  date, BOOL  bRefresh  );
	void SetEventDate(struct DUI_CALENDARDATE  date, BOOL  bRefresh  );
	void IsEventDate(struct DUI_CALENDARDATE  date, VARIANT_BOOL * bpIsEventDay  );
	void JumpToToday();
	void JumpToSpecDay(short  year, short  month, short  day  );
};

enum DUI_WEEKTEXT
{ 
	WEEKTEXT_FRI = 5,
	WEEKTEXT_LAST = 7,
	WEEKTEXT_MON = 1,
	WEEKTEXT_SAT = 6,
	WEEKTEXT_SUN = 0,
	WEEKTEXT_THURS = 4,
	WEEKTEXT_TUES = 2,
	WEEKTEXT_WED = 3 
};

struct __declspec(uuid("a5157f65-2a31-4eea-a810-9c6204364a2f")) DUI_CALENDARDATE
{
	long 	nYear;
	long 	nMonth;
	long 	nDate;
};

struct __declspec(uuid("cfc5e855-04ce-4d94-96fb-b7a332d11956")) _IDUICalendarCtrlEvents : IDispatch
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

struct __declspec(uuid("02add505-acf2-4552-b98c-54304faf0581")) IDUICalendarCtrl : IDispatch
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

struct __declspec(uuid("4d7bca3d-2df5-4f6d-8b59-0d1edb2ca472")) _IDUIYearMonthBarEvents : IDispatch
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

struct __declspec(uuid("50c05edd-5253-4efa-a736-d813435bc148")) IDUIYearMonthBar : IDispatch
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

struct __declspec(uuid("f9649c65-0641-40ba-b283-752221a4f9a7")) _IDUIGridLayoutEvents : IDispatch
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

struct __declspec(uuid("d2a5c844-1613-4c0c-8a2f-6a2598adfc7a")) IDUIGridLayout : IDispatch
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

struct __declspec(uuid("5d581f5f-2b35-42d0-9ac0-49a89a8b8f5b")) _IDUIWeekBarEvents : IDispatch
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

struct __declspec(uuid("d2e8b4f5-30b2-44e4-9c37-97d23c6cb0d5")) IDUIWeekBar : IDispatch
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

struct __declspec(uuid("96fd4338-3328-4e94-bbda-8663534425a8")) _IDUIDateBaseEvents : IDispatch
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

struct __declspec(uuid("06d93fb7-f580-433b-afb0-38897cabe39e")) IDUIDateBase : IDispatch
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

struct __declspec(uuid("7c0ab66e-5c27-439e-bf6b-6d91998b9b1c")) _IDUITheMonthDateEvents : IDispatch
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

struct __declspec(uuid("70548e58-d07a-47b2-9132-7e3ec6fb9c30")) IDUITheMonthDate : IDispatch
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

struct __declspec(uuid("d205ceb1-6111-4e5c-9ccb-a29ae722e381")) _IDUIOtherMonthDateEvents : IDispatch
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

struct __declspec(uuid("f0eeabf6-697a-4c20-9bee-2b95ebc17c10")) IDUIOtherMonthDate : IDispatch
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

struct __declspec(uuid("402b80f5-fef9-4296-9f0f-229d8ebeceee")) _IDUIPrevMonthDateEvents : IDispatch
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

struct __declspec(uuid("6d32edbc-1c32-4a92-a75f-9e704568c579")) IDUIPrevMonthDate : IDUIOtherMonthDate
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

struct __declspec(uuid("4d6a42ed-046e-4946-aa17-4a48dfb5a9b7")) _IDUINextMonthDateEvents : IDispatch
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

struct __declspec(uuid("7c266e68-5172-4df8-8ed2-9fbf83beda16")) IDUINextMonthDate : IDUIOtherMonthDate
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

struct __declspec(uuid("5cc09df8-ba0c-455f-abdb-35e21c52c567")) _IDUICalendarButtonEvents : IDispatch
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

struct __declspec(uuid("b6d8d902-fd7f-4e78-a45b-c33fdfc13e69")) IDUICalendarButton : IDispatch
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

struct __declspec(uuid("1ac48db9-9817-4cbc-9cac-a7910fea1e8d")) _IDUICalendarPreButtonEvents : IDispatch
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

struct __declspec(uuid("90f602f7-6ee3-4891-bd5a-a2de7a6597bb")) IDUICalendarPreButton : IDUICalendarButton
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

struct __declspec(uuid("e7a83f65-efc8-4d47-b7c0-34d45e455c02")) _IDUICalendarNextButtonEvents : IDispatch
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

struct __declspec(uuid("9f7f9ce4-3ae3-4c96-a94c-726dabc95a4d")) IDUICalendarNextButton : IDUICalendarButton
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

struct __declspec(uuid("18c128ca-cce1-4419-abf4-403b03c7cd92")) _IDUISwitchCtrlEvents : IDispatch
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

struct __declspec(uuid("2c6b8e67-c39f-4375-a54f-3532dfbac8b5")) IDUISwitchCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_IsSwitchTabLeft(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSwitchTabPos(VARIANT_BOOL bIsLeft  ) = 0;
	virtual HRESULT __stdcall raw_GetSwitchTabLeftText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSwitchTabRightText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSwitchTabLeftText(BSTR strLeftText  ) = 0;
	virtual HRESULT __stdcall raw_SetSwitchTabRightText(BSTR strRightText  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  IsSwitchTabLeft();
	void SetSwitchTabPos(BOOL  bIsLeft  );
	tstring  GetSwitchTabLeftText();
	tstring  GetSwitchTabRightText();
	void SetSwitchTabLeftText(tstring  strLeftText  );
	void SetSwitchTabRightText(tstring  strRightText  );
};

struct __declspec(uuid("16a55d64-78d4-442d-a7a1-a5fbbb501fb6")) _IDUIGraphCtrlEvents : IDispatch
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

struct __declspec(uuid("d58a12ee-e346-4968-97c3-9cc51ad1275e")) IDUIGraphCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddColumn(float nValue1, float nValue2, float nValue3, float nValue4, long nIndex, VARIANT_BOOL bIncreased  ) = 0;
	virtual HRESULT __stdcall raw_AddCurve() = 0;
	virtual HRESULT __stdcall raw_AddCurvePoint(long nIndex, float nValueX, float nValueY  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllCurve() = 0;
	virtual HRESULT __stdcall raw_RemoveAllColumns() = 0;
	virtual HRESULT __stdcall raw_CreateTestPoint(long nIndex  ) = 0;
	virtual HRESULT __stdcall raw_CreateTestKLineData() = 0;
	virtual HRESULT __stdcall raw_CreateTestHistorgramData() = 0;
	virtual HRESULT __stdcall raw_CreateTestStockData() = 0;
	virtual HRESULT __stdcall raw_SetXAxisProp(float nDataLenth, long nUint, long nNumPerUnit  ) = 0;
	virtual HRESULT __stdcall raw_SetYAxisProp(float nDataLenth, long nUint, long nNumPerUnit, float nAxisLevelOffset  ) = 0;
	virtual HRESULT __stdcall raw_SetXAxisUnitText(long nIndex, BSTR strDes  ) = 0;
	virtual HRESULT __stdcall raw_SetYAxisUnitText(long nIndex, BSTR strDes  ) = 0;
	virtual HRESULT __stdcall raw_SetYAxisRightUnitText(long nIndex, BSTR strDes  ) = 0;
	virtual HRESULT __stdcall raw_CreateTestBlockData() = 0;
	virtual HRESULT __stdcall raw_ResetXAxisPoint(VARIANT_BOOL bFreshOrInit  ) = 0;
	virtual HRESULT __stdcall raw_AddWaitAxisText(BSTR strAxisText  ) = 0;
	virtual HRESULT __stdcall raw_AddBlockGraphPoint(float fValue  ) = 0;
	virtual HRESULT __stdcall raw_SetAxisColor(long nColor  ) = 0;
	virtual HRESULT __stdcall raw_SetBlockColor(long nColor  ) = 0;
	virtual HRESULT __stdcall raw_SetBlockOverLineColor(long nColor  ) = 0;

	//
	//Method Wrapper
	//
	void AddColumn(float  nValue1, float  nValue2, float  nValue3, float  nValue4, long  nIndex, BOOL  bIncreased  );
	void AddCurve();
	void AddCurvePoint(long  nIndex, float  nValueX, float  nValueY  );
	void RemoveAllCurve();
	void RemoveAllColumns();
	void CreateTestPoint(long  nIndex  );
	void CreateTestKLineData();
	void CreateTestHistorgramData();
	void CreateTestStockData();
	void SetXAxisProp(float  nDataLenth, long  nUint, long  nNumPerUnit  );
	void SetYAxisProp(float  nDataLenth, long  nUint, long  nNumPerUnit, float  nAxisLevelOffset  );
	void SetXAxisUnitText(long  nIndex, tstring  strDes  );
	void SetYAxisUnitText(long  nIndex, tstring  strDes  );
	void SetYAxisRightUnitText(long  nIndex, tstring  strDes  );
	void CreateTestBlockData();
	void ResetXAxisPoint(BOOL  bFreshOrInit  );
	void AddWaitAxisText(tstring  strAxisText  );
	void AddBlockGraphPoint(float  fValue  );
	void SetAxisColor(long  nColor  );
	void SetBlockColor(long  nColor  );
	void SetBlockOverLineColor(long  nColor  );
};

struct __declspec(uuid("9b6c9c14-e381-4f16-b9b4-c26c269dd908")) _IDUIMeetingConflictEvents : IDispatch
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

struct __declspec(uuid("a0e54c4f-520e-4429-9d04-d0bdcfbca7f2")) IDUIMeetingConflict : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetFrames(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFrames(long nFrames, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCurrPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCurrPos(long nPos, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsCanSelStar(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCanSelStar(VARIANT_BOOL bCanSelStar  ) = 0;
	virtual HRESULT __stdcall raw_SetFirstBeginTime(LONGLONG nBeginTime  ) = 0;
	virtual HRESULT __stdcall raw_SetFirstEndTime(LONGLONG nEndTime  ) = 0;
	virtual HRESULT __stdcall raw_SetSecondBeginTime(LONGLONG nBeginTime  ) = 0;
	virtual HRESULT __stdcall raw_SetSecondEndTime(LONGLONG nEndTime  ) = 0;
	virtual HRESULT __stdcall raw_SetLineX(int nX  ) = 0;
	virtual HRESULT __stdcall raw_SetFormX(int nX  ) = 0;
	virtual HRESULT __stdcall raw_Refresh() = 0;
	virtual HRESULT __stdcall raw_SetDotWidth(int nDotWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetLineWidth(int nLineWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetHeaderHeight(int nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetTailHeight(int nHeight  ) = 0;

	//
	//Method Wrapper
	//
	long  GetFrames();
	BOOL  SetFrames(long  nFrames, BOOL  bRedraw  );
	long  GetCurrPos();
	BOOL  SetCurrPos(long  nPos, BOOL  bRedraw  );
	BOOL  IsCanSelStar();
	void SetCanSelStar(BOOL  bCanSelStar  );
	void SetFirstBeginTime(LONGLONG  nBeginTime  );
	void SetFirstEndTime(LONGLONG  nEndTime  );
	void SetSecondBeginTime(LONGLONG  nBeginTime  );
	void SetSecondEndTime(LONGLONG  nEndTime  );
	void SetLineX(int  nX  );
	void SetFormX(int  nX  );
	void Refresh();
	void SetDotWidth(int  nDotWidth  );
	void SetLineWidth(int  nLineWidth  );
	void SetHeaderHeight(int  nHeight  );
	void SetTailHeight(int  nHeight  );
};

enum DUI_DATE_CHANGED_MESSAGE
{ 
	DUI_DATE_CHANGED = 13313 
};

struct __declspec(uuid("011dcafd-b35b-4b6e-ab75-377f513632e9")) _IDUIRollCalendarEvents : IDispatch
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

struct __declspec(uuid("dd81f6f9-1e94-4bb9-8546-2297639b58cb")) IDUIRollCalendar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetCurDate(long *pnYear, long *pnMonth, long *pnDay  ) = 0;
	virtual HRESULT __stdcall raw_SetCurDate(long nYear, long nMonth, long nDay  ) = 0;
	virtual HRESULT __stdcall raw_SetShowDays(long nDays  ) = 0;
	virtual HRESULT __stdcall raw_SetMonthLeft(long nMonthLeft  ) = 0;
	virtual HRESULT __stdcall raw_SetMonthWidth(long nWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetDayWidth(long nWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetTopSpace(long nTopSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetBottomSpace(long nBottomSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetRollSteep(long nRollSteep  ) = 0;
	virtual HRESULT __stdcall raw_SetRollInterval(long nInterval  ) = 0;
	virtual HRESULT __stdcall raw_SetSpecialDate(long lYear, long lMonth, long lDay, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ClearSpecialDate(long lYear, long lMonth, long lDay, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ClearAllSpecialDate() = 0;

	//
	//Method Wrapper
	//
	void GetCurDate(long * pnYear, long * pnMonth, long * pnDay  );
	void SetCurDate(long  nYear, long  nMonth, long  nDay  );
	void SetShowDays(long  nDays  );
	void SetMonthLeft(long  nMonthLeft  );
	void SetMonthWidth(long  nWidth  );
	void SetDayWidth(long  nWidth  );
	void SetTopSpace(long  nTopSpace  );
	void SetBottomSpace(long  nBottomSpace  );
	void SetRollSteep(long  nRollSteep  );
	void SetRollInterval(long  nInterval  );
	BOOL  SetSpecialDate(long  lYear, long  lMonth, long  lDay  );
	BOOL  ClearSpecialDate(long  lYear, long  lMonth, long  lDay  );
	void ClearAllSpecialDate();
};

enum DUI_TAGITEM_MESSAGE
{ 
	DUI_TAGITEM_CLICK = 13312 
};

struct __declspec(uuid("927dfddc-c8fb-4ac7-a4ef-860241d94052")) _IDUITagCtrlEvents : IDispatch
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

struct __declspec(uuid("dc40e785-0a4b-4304-a553-254f0b6056b1")) IDUITagCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetLeft(long left  ) = 0;
	virtual HRESULT __stdcall raw_SetHSpace(long nSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetVSpace(long nSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetTop(long nTop  ) = 0;
	virtual HRESULT __stdcall raw_CreateItem(BSTR strText, struct IDUITagItem *pParent, struct IDUITagItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(long nHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetTimeInterval(long nInterval  ) = 0;
	virtual HRESULT __stdcall raw_GetFirstItem(struct IDUITagItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextItem(struct IDUITagItem *pItem, struct IDUITagItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetTailItem(struct IDUITagItem **pResult) = 0;
	virtual HRESULT __stdcall raw_PopItem(struct IDUITagItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteItem(struct IDUITagItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_ChangeItemRect(struct IDUITagItem *pItem, VARIANT_BOOL bLeft  ) = 0;
	virtual HRESULT __stdcall raw_SetMinWidth(long nWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetMaxWidth(long nWidth  ) = 0;
	virtual HRESULT __stdcall raw_IsMoving(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineWidth(long nWidth  ) = 0;
	virtual HRESULT __stdcall raw_EnableAnimate(VARIANT_BOOL bAnimate, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetLeft(long  left  );
	void SetHSpace(long  nSpace  );
	void SetVSpace(long  nSpace  );
	void SetTop(long  nTop  );
	struct IDUITagItem * CreateItem(tstring  strText, struct IDUITagItem * pParent  );
	void SetItemHeight(long  nHeight  );
	void SetTimeInterval(long  nInterval  );
	struct IDUITagItem * GetFirstItem();
	struct IDUITagItem * GetNextItem(struct IDUITagItem * pItem  );
	struct IDUITagItem * GetTailItem();
	BOOL  PopItem(struct IDUITagItem * pItem  );
	void DeleteItem(struct IDUITagItem * pItem  );
	void ChangeItemRect(struct IDUITagItem * pItem, BOOL  bLeft  );
	void SetMinWidth(long  nWidth  );
	void SetMaxWidth(long  nWidth  );
	BOOL  IsMoving();
	void SetLineWidth(long  nWidth  );
	BOOL  EnableAnimate(BOOL  bAnimate = TRUE  );
};

struct __declspec(uuid("b124d660-e309-4228-b947-06bedd3b1024")) IDUITagItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetParent(struct IDUITagItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubItem(long nIndex, struct IDUITagItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE lnData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	void SetVisible(BOOL  bVisible  );
	BOOL  IsVisible();
	struct IDUITagItem * GetParent();
	struct IDUITagItem * GetSubItem(long  nIndex  );
	long  GetSubItemCount();
	void SetData(OLE_HANDLE  lnData  );
	OLE_HANDLE  GetData();
};

struct __declspec(uuid("c520bf70-ceb7-4074-b442-1fff127c9c27")) _IDUITagItemEvents : IDispatch
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

enum DUI_BLOCK_CLICK_MESSAGE
{ 
	DUI_BLOCK_CLICK = 13314 
};

struct __declspec(uuid("14746394-0776-442b-8c91-d1551d58547f")) _IDUIRollCtrlEvents : IDispatch
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

struct __declspec(uuid("1497d48b-866c-45b8-9b2e-3ae12b8ffd4e")) IDUIRollCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_ClearText() = 0;
	virtual HRESULT __stdcall raw_AppendText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_Refresh() = 0;

	//
	//Method Wrapper
	//
	void ClearText();
	void AppendText(tstring  strText  );
	void Refresh();
};

enum DUI_TOOLITEM_MESSAGE
{ 
	DUI_TOOLITEM_CLICK = 13412 
};

enum TOOLITEM_TYPE
{ 
	DETECTOR = 1,
	NOITEM = 0,
	TOOL = 2,
	VERNIER = 3 
};

enum TOOLITEM_STATE
{ 
	TOOLITEM_STATE_HOT = 1,
	TOOLITEM_STATE_LAST = 4,
	TOOLITEM_STATE_MOVEABLE = 3,
	TOOLITEM_STATE_NORMAL = 0,
	TOOLITEM_STATE_PRESSED = 2 
};

struct __declspec(uuid("c1ab15c8-97be-4e68-bf36-6b33f56114ec")) _IDUIToolStringEvents : IDispatch
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

struct __declspec(uuid("8a50a186-c501-4671-82e0-9fb1a8b668a3")) IDUIToolString : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetMajorScaleStartX(long nX  ) = 0;
	virtual HRESULT __stdcall raw_SetMinorScaleStartX(long nX  ) = 0;
	virtual HRESULT __stdcall raw_SetScaleEndX(long nX  ) = 0;
	virtual HRESULT __stdcall raw_SetMaxScaleTextLength(long nLength  ) = 0;
	virtual HRESULT __stdcall raw_SetMajorScalePensize(long nSize  ) = 0;
	virtual HRESULT __stdcall raw_SetMinorScalePensize(long nSize  ) = 0;
	virtual HRESULT __stdcall raw_SetStartDegree(long nDegree  ) = 0;
	virtual HRESULT __stdcall raw_SetDegreeUnit(long nDegreeUnit  ) = 0;
	virtual HRESULT __stdcall raw_SetTextToLine(long nOffset  ) = 0;
	virtual HRESULT __stdcall raw_SetRulerRange(long nTop, long nBottom, long nUnitPixels  ) = 0;
	virtual HRESULT __stdcall raw_InitRuler() = 0;
	virtual HRESULT __stdcall raw_AddItem(long nID, float nWidth, float nHeight, long nDeep, struct IDUIToolItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(struct IDUIToolItem *pItem, long nID, float nWidth, float nHeight, long nDeep, struct IDUIToolItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHScrollBar(struct IDUIScrollBar *pScBar  ) = 0;
	virtual HRESULT __stdcall raw_SetVScrollBar(struct IDUIScrollBar *pScBar  ) = 0;
	virtual HRESULT __stdcall raw_MoveUp(struct IDUIToolItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_MoveDown(struct IDUIToolItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_AddItemUp(struct IDUIToolItem *pItem, long nID, float nWidth, float nHeight, long nDeep, struct IDUIToolItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AddItemDown(struct IDUIToolItem *pItem, long nID, float nWidth, float nHeight, long nDeep, struct IDUIToolItem **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUIToolItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_Refresh() = 0;
	virtual HRESULT __stdcall raw_EnableVernier(VARIANT_BOOL bEnable  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItem() = 0;

	//
	//Method Wrapper
	//
	void SetMajorScaleStartX(long  nX  );
	void SetMinorScaleStartX(long  nX  );
	void SetScaleEndX(long  nX  );
	void SetMaxScaleTextLength(long  nLength  );
	void SetMajorScalePensize(long  nSize  );
	void SetMinorScalePensize(long  nSize  );
	void SetStartDegree(long  nDegree  );
	void SetDegreeUnit(long  nDegreeUnit  );
	void SetTextToLine(long  nOffset  );
	void SetRulerRange(long  nTop, long  nBottom, long  nUnitPixels  );
	void InitRuler();
	struct IDUIToolItem * AddItem(long  nID, float  nWidth, float  nHeight, long  nDeep  );
	struct IDUIToolItem * AppendItem(struct IDUIToolItem * pItem, long  nID, float  nWidth, float  nHeight, long  nDeep  );
	void SetHScrollBar(struct IDUIScrollBar * pScBar  );
	void SetVScrollBar(struct IDUIScrollBar * pScBar  );
	void MoveUp(struct IDUIToolItem * pItem  );
	void MoveDown(struct IDUIToolItem * pItem  );
	struct IDUIToolItem * AddItemUp(struct IDUIToolItem * pItem, long  nID, float  nWidth, float  nHeight, long  nDeep  );
	struct IDUIToolItem * AddItemDown(struct IDUIToolItem * pItem, long  nID, float  nWidth, float  nHeight, long  nDeep  );
	void RemoveItem(struct IDUIToolItem * pItem  );
	void Refresh();
	void EnableVernier(BOOL  bEnable  );
	void RemoveAllItem();
};

struct __declspec(uuid("eabf9789-54b7-4864-b8ae-06a17a15ace8")) IDUIToolItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE lnData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRect(long nLeft, long nTop, long nRight, long nBottom  ) = 0;
	virtual HRESULT __stdcall raw_AddDetector(long nID, struct IDUIDetector **pResult) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	void SetData(OLE_HANDLE  lnData  );
	OLE_HANDLE  GetData();
	void SetRect(long  nLeft, long  nTop, long  nRight, long  nBottom  );
	struct IDUIDetector * AddDetector(long  nID  );
	long  GetID();
};

struct __declspec(uuid("c53bbff3-3af7-430a-962b-179e8e5cd02c")) IDUIDetector : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE lnData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHeight(float nHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetOwner(struct IDUIToolItem **pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	void SetData(OLE_HANDLE  lnData  );
	OLE_HANDLE  GetData();
	void SetHeight(float  nHeight  );
	struct IDUIToolItem * GetOwner();
};

struct __declspec(uuid("6e573a20-ceb2-4f99-bde7-a7d88dacedd8")) _IDUIToolItemEvents : IDispatch
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

struct __declspec(uuid("041a69ec-7ef2-429d-b68e-1aac82f5cec8")) _IDUIDetectorEvents : IDispatch
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

enum LVCTRL_STYLE
{ 
	DUILVCTRL_ICON = 1,
	DUILVCTRL_LIST = 0 
};

enum ListCtrlMsgID
{ 
	DUI_LC_CUSTOMITEM_CLICK = 3039,
	DUI_LC_DBLBUTTONUP = 3029,
	DUI_LC_DRAGCTRLCHANGE = 3038,
	DUI_LC_DRAGING = 3035,
	DUI_LC_ENDDRAG = 3037,
	DUI_LC_FILEDRAGING = 3033,
	DUI_LC_FILEENDDRAG = 3034,
	DUI_LC_FILEINIT = 3032,
	DUI_LC_FILESTARTDRAG = 3031,
	DUI_LC_LBUTTONDOWN = 3026,
	DUI_LC_LBUTTONUP = 3025,
	DUI_LC_MAXCOUNT = 3036,
	DUI_LC_PAGECHANGE = 3030,
	DUI_LC_RBUTTONDOWN = 3028,
	DUI_LC_RBUTTONUP = 3027 
};

enum DUI_LCMSGID
{ 
	DUILC_NOTIFY = 3472 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUILCNotifyInfo
{
	enum ListCtrlMsgID 	eDUILCMsgId;
	OLE_HANDLE 	lParam1;
	OLE_HANDLE 	lParam2;
	OLE_HANDLE 	lParam3;
	OLE_HANDLE 	lParam4;
	OLE_HANDLE 	lParam5;
};

struct __declspec(uuid("89c3d6bb-9c3b-43f5-8c53-b2db41e69a2f")) _IDUIListCtrlEvents : IDispatch
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

struct __declspec(uuid("e49e9945-f3a5-4e6d-a7ae-5a06c7452ed9")) IDUIListCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InsertItem(long nIndex, BSTR szText, long nID, OLE_HANDLE hIcon, OLE_HANDLE hSmallIcon, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLStyle(enum LVCTRL_STYLE nStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(long nIndex, struct IDUILCItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHorScroll(VARIANT_BOOL bHorScroll  ) = 0;
	virtual HRESULT __stdcall raw_GetPageCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCurrentPage(long nPage  ) = 0;
	virtual HRESULT __stdcall raw_GetCurrentPage(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHorSpace(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemVerSpace(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBorderRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemWidth(long nItemWidth  ) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(long nItemHeight  ) = 0;
	virtual HRESULT __stdcall raw_SetItemHorSpace(long nHorSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetItemVerSpace(long nVerSpace  ) = 0;
	virtual HRESULT __stdcall raw_SetBorderRect(struct SkinRect rcBorder  ) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByIndex(long nIndex, VARIANT_BOOL bDel  ) = 0;
	virtual HRESULT __stdcall raw_InsertItemByItem(struct IDUILCItem *pItem, long nIndex  ) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByItem(struct IDUILCItem *pItem, VARIANT_BOOL bDel  ) = 0;
	virtual HRESULT __stdcall raw_EraseAllItem(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteAllItem(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMaxCount(long nMax  ) = 0;
	virtual HRESULT __stdcall raw_GetMaxCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetListModel(struct IDUIControlBase *pUIForm  ) = 0;
	virtual HRESULT __stdcall raw_GetFirstSelectedItem(struct IDUILCItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextSelectedItem(struct IDUILCItem *pItem, struct IDUILCItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItemCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetVisibleCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPageItem(long nPageIndex, long nIndex, struct IDUILCItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetPageItemCount(long nIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_UnSelectedItems() = 0;

	//
	//Method Wrapper
	//
	long  InsertItem(long  nIndex, tstring  szText, long  nID, OLE_HANDLE  hIcon = 0, OLE_HANDLE  hSmallIcon = 0  );
	void SetLStyle(enum LVCTRL_STYLE  nStyle  );
	long  GetItemCount();
	struct IDUILCItem * GetAt(long  nIndex  );
	void SetHorScroll(BOOL  bHorScroll  );
	long  GetPageCount();
	void SetCurrentPage(long  nPage  );
	long  GetCurrentPage();
	short  GetItemWidth();
	short  GetItemHeight();
	short  GetItemHorSpace();
	short  GetItemVerSpace();
	struct SkinRect  GetBorderRect();
	void SetItemWidth(long  nItemWidth  );
	void SetItemHeight(long  nItemHeight  );
	void SetItemHorSpace(long  nHorSpace  );
	void SetItemVerSpace(long  nVerSpace  );
	void SetBorderRect(struct SkinRect  rcBorder  );
	void RemoveItemByIndex(long  nIndex, BOOL  bDel  );
	void InsertItemByItem(struct IDUILCItem * pItem, long  nIndex  );
	void RemoveItemByItem(struct IDUILCItem * pItem, BOOL  bDel  );
	BOOL  EraseAllItem();
	BOOL  DeleteAllItem();
	void SetMaxCount(long  nMax  );
	long  GetMaxCount();
	void SetListModel(struct IDUIControlBase * pUIForm  );
	struct IDUILCItem * GetFirstSelectedItem();
	struct IDUILCItem * GetNextSelectedItem(struct IDUILCItem * pItem  );
	long  GetSelectedItemCount();
	long  GetVisibleCount();
	struct IDUILCItem * GetPageItem(long  nPageIndex, long  nIndex  );
	long  GetPageItemCount(long  nIndex  );
	void UnSelectedItems();
};

struct __declspec(uuid("728dd28d-be9e-4a02-a09a-5d4302622805")) IDUILCItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHICON(OLE_HANDLE hIcon, enum LC_ICONSTYLE nStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetDrawRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIndex(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCanMerger(VARIANT_BOOL bDragChangePos  ) = 0;
	virtual HRESULT __stdcall raw_GetHICON(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChildCount(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFile(VARIANT_BOOL bFile  ) = 0;
	virtual HRESULT __stdcall raw_IsFile(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetModel(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicRect(struct SkinRect skinRc  ) = 0;
	virtual HRESULT __stdcall raw_GetGraphicRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetModel(struct IDUIControlBase *pModel, VARIANT_BOOL bClone  ) = 0;
	virtual HRESULT __stdcall raw_RemoveModel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPicPath(BSTR strPath  ) = 0;
	virtual HRESULT __stdcall raw_GetPicPath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBelongsPage(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnableDragOut(VARIANT_BOOL bDragOut  ) = 0;
	virtual HRESULT __stdcall raw_IsCanDragOut(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	void SetHICON(OLE_HANDLE  hIcon, enum LC_ICONSTYLE  nStyle  );
	struct SkinRect  GetDrawRect();
	long  GetIndex();
	void SetCanMerger(BOOL  bDragChangePos  );
	OLE_HANDLE  GetHICON();
	OLE_HANDLE  GetChildCount();
	void SetFile(BOOL  bFile  );
	BOOL  IsFile();
	void SetData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetData();
	struct IDUIControlBase * GetModel();
	void SetGraphicRect(struct SkinRect  skinRc  );
	struct SkinRect  GetGraphicRect();
	void SetModel(struct IDUIControlBase * pModel, BOOL  bClone  );
	BOOL  RemoveModel();
	void SetPicPath(tstring  strPath  );
	tstring  GetPicPath();
	struct SkinRect  GetTextRect();
	long  GetBelongsPage();
	void SetEnableDragOut(BOOL  bDragOut  );
	BOOL  IsCanDragOut();
};

enum LC_ICONSTYLE
{ 
	LC_ICON_LARGE = 2,
	LC_ICON_NORMAL = 1,
	LC_ICON_SMALL = 0 
};


#include "KernelAll.tli"
#endif //__HEAD__KERNELALL__