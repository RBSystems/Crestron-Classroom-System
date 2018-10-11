namespace Crestron.Rio.System;
        // class declarations
         class SystemUI;
         class SystemUIHelperBase;
         class SystemUIHelper;
         class SystemUIMLX3Helper;
         class RioRegistry;
         class RoomGroup;
         class Room;
         class UserInterfaceViewModel;
         class HomeScreenItemSelector;
         class TreeNode;
         class Subsystem;
         class UI;
         class SystemSettings;
         class SystemManager;
         class GlobalMacro;
     class SystemUI 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ShowHomeScreen ();
        FUNCTION HideSubpageFlip ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER ActiveSubsystem;
        SIGNED_LONG_INTEGER uiPersistentSubsystem;
    };

     class SystemUIHelperBase 
    {
        // class delegates
        delegate FUNCTION DelegateFnUshort ( INTEGER i );
        delegate FUNCTION DelegateFnUshortUshort ( INTEGER i , INTEGER j );

        // class events

        // class functions
        FUNCTION InitializeBase ();
        FUNCTION Register ( SIGNED_LONG_INTEGER id );
        FUNCTION TriggerStartupSubsystem ();
        FUNCTION TriggerPersistentSubsystem ();
        FUNCTION ShowHomeScreen ();
        FUNCTION HideHomeScreen ();
        INTEGER_FUNCTION GetNumberofVisibleSubsystems ( INTEGER id );
        INTEGER_FUNCTION GetNumberofHomeScreenItems ( INTEGER id );
        STRING_FUNCTION GetListItemLabel ( INTEGER panelID , INTEGER indexofItem );
        SIMPLSHARPSTRING_FUNCTION GetListItemIcon ( INTEGER panelID , INTEGER indexofItem );
        INTEGER_FUNCTION GetStartupSubSystem ( INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER SystemReady;

        // class properties
        DelegateProperty DelegateFnUshort UpdateHomeScreen;
        DelegateProperty DelegateFnUshortUshort TriggerAction;
        SIGNED_LONG_INTEGER ID;
    };

     class SystemUIHelper 
    {
        // class delegates
        delegate FUNCTION DelegateFnUshort ( INTEGER i );
        delegate FUNCTION DelegateFnUshortUshort ( INTEGER i , INTEGER j );

        // class events

        // class functions
        FUNCTION Initialize ();
        FUNCTION RequestHomeScreen ();
        FUNCTION HomeScreenItemSelected ( INTEGER item , INTEGER panelID );
        FUNCTION RequestSubpage ( INTEGER subpageJoin );
        FUNCTION InitializeBase ();
        FUNCTION Register ( SIGNED_LONG_INTEGER id );
        FUNCTION TriggerStartupSubsystem ();
        FUNCTION TriggerPersistentSubsystem ();
        FUNCTION ShowHomeScreen ();
        FUNCTION HideHomeScreen ();
        INTEGER_FUNCTION GetNumberofVisibleSubsystems ( INTEGER id );
        INTEGER_FUNCTION GetNumberofHomeScreenItems ( INTEGER id );
        STRING_FUNCTION GetListItemLabel ( INTEGER panelID , INTEGER indexofItem );
        SIMPLSHARPSTRING_FUNCTION GetListItemIcon ( INTEGER panelID , INTEGER indexofItem );
        INTEGER_FUNCTION GetStartupSubSystem ( INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER SystemReady;

        // class properties
        DelegateProperty DelegateFnUshort TriggerSubpage;
        DelegateProperty DelegateFnUshort UpdateHomeScreen;
        DelegateProperty DelegateFnUshortUshort TriggerAction;
        SIGNED_LONG_INTEGER ID;
    };

     class SystemUIMLX3Helper 
    {
        // class delegates
        delegate FUNCTION DelegateFnUshort ( INTEGER i );
        delegate FUNCTION DelegateFnUshortUshort ( INTEGER i , INTEGER j );

        // class events

        // class functions
        FUNCTION Initialize ();
        FUNCTION HomeScreenItemSelected ( INTEGER item , INTEGER panelID );
        FUNCTION InitializeBase ();
        FUNCTION Register ( SIGNED_LONG_INTEGER id );
        FUNCTION TriggerStartupSubsystem ();
        FUNCTION TriggerPersistentSubsystem ();
        FUNCTION ShowHomeScreen ();
        FUNCTION HideHomeScreen ();
        INTEGER_FUNCTION GetNumberofVisibleSubsystems ( INTEGER id );
        INTEGER_FUNCTION GetNumberofHomeScreenItems ( INTEGER id );
        STRING_FUNCTION GetListItemLabel ( INTEGER panelID , INTEGER indexofItem );
        SIMPLSHARPSTRING_FUNCTION GetListItemIcon ( INTEGER panelID , INTEGER indexofItem );
        INTEGER_FUNCTION GetStartupSubSystem ( INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER SystemReady;

        // class properties
        DelegateProperty DelegateFnUshort UpdateHomeScreen;
        DelegateProperty DelegateFnUshortUshort TriggerAction;
        SIGNED_LONG_INTEGER ID;
    };

     class RioRegistry 
    {
        // class delegates

        // class events

        // class functions
        LONG_INTEGER_FUNCTION Unregister ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class RoomGroup 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER roomGroupID;
        SIGNED_LONG_INTEGER roomGroupIcon;
        STRING roomGroupName[];

        // class properties
    };

     class Room 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetChildrenCount ();
        SIGNED_LONG_INTEGER_FUNCTION GetParentHierarchyCount ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER ID;
        STRING Name[];
    };

     class UserInterfaceViewModel 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION SetUserInterfaceID ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class HomeScreenItemSelector 
    {
        // class delegates
        delegate FUNCTION DelegateShort ( SIGNED_INTEGER value );
        delegate FUNCTION DelegateShortString ( SIGNED_INTEGER intValue , SIMPLSHARPSTRING stringValue );
        delegate FUNCTION DelegateShortShort ( SIGNED_INTEGER value1 , SIGNED_INTEGER value2 );

        // class events

        // class functions
        FUNCTION RequestHomeScreen ();
        FUNCTION RequestSubpageFlip ( SIGNED_LONG_INTEGER subpageJoin );
        FUNCTION SelectItemIndex ( SIGNED_LONG_INTEGER itemIndex );
        FUNCTION SetUserInterfaceID ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateShort UpdateShowHomeScreenCallback;
        DelegateProperty DelegateShort UpdateFlipToSubpageCallback;
        DelegateProperty DelegateShortString UpdateItemIconFilenameCallback;
        DelegateProperty DelegateShortString UpdateItemLabelCallback;
        DelegateProperty DelegateShort UpdateCountCallback;
        DelegateProperty DelegateShortShort TriggerActionCallback;
    };

     class Subsystem 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER subsystemID;
        SIGNED_LONG_INTEGER subsystemIcon;
        STRING subsystemName[];
        STRING subsystemConfigFilePath[];
    };

     class UI 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER uiID;
        STRING uiName[];
        SIGNED_LONG_INTEGER uistartupSubsystem;
        SIGNED_LONG_INTEGER uiPersistentSubsystem;
        SIGNED_LONG_INTEGER defaultRoomID;
    };

     class SystemSettings 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION GetSubsystemFilePath ( SIGNED_LONG_INTEGER subsystemID );
        SIGNED_LONG_INTEGER_FUNCTION GetSubsystemIcon ( SIGNED_LONG_INTEGER subsystemID );
        SIGNED_LONG_INTEGER_FUNCTION GetDefaultRoomId ( SIGNED_LONG_INTEGER uiID );
        SIGNED_LONG_INTEGER_FUNCTION TotalSubsystems ();
        FUNCTION Initialize ( SIMPLSHARPSTRING filePath , SIMPLSHARPSTRING moduleParameterUUID );
        STRING_FUNCTION GetRoomName ( SIGNED_LONG_INTEGER roomID );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING systemUUID[];
        STRING configFileVersion[];
        STRING systemName[];
        STRING systemVersion[];
        SIGNED_LONG_INTEGER latitude;
        SIGNED_LONG_INTEGER longitude;
        STRING country[];
        STRING city[];
        SIGNED_LONG_INTEGER timeZone;
        SIGNED_LONG_INTEGER zipCode;
        SIGNED_LONG_INTEGER startupSubsystem;
        SIGNED_LONG_INTEGER persistentSubsystem;
    };

    static class SystemManager 
    {
        // class delegates

        // class events

        // class functions
        static FUNCTION RegisterSubsystem ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static Crestron.Rio.System.SystemSettings Settings;
        static Crestron.Rio.System.RioRegistry SystemUIRegistry;

        // class properties
    };

     class GlobalMacro 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER globalMacroID;
        STRING globalMacroName[];
        SIGNED_LONG_INTEGER globalMacroIcon;

        // class properties
    };

