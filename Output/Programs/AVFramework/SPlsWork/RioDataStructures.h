namespace Crestron.Rio.DataStructures.Media.Routing;
        // class declarations
         class TransportType;
         class VideoSignalQuality;
         class SignalType;
         class SignalGroupBehavior;
         class SignalGroupType;
         class SerializationSignal;
         class SerializationSignalGroup;
         class SerializationTarget;
     class TransportType 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER code;
        SIGNED_LONG_INTEGER audioRank;
        SIGNED_LONG_INTEGER videoRank;

        // class properties
    };

    static class VideoSignalQuality // enum
    {
        static SIGNED_LONG_INTEGER NotApplicable;
        static SIGNED_LONG_INTEGER Bad;
        static SIGNED_LONG_INTEGER Bearable;
        static SIGNED_LONG_INTEGER OK;
        static SIGNED_LONG_INTEGER Good;
        static SIGNED_LONG_INTEGER Better;
        static SIGNED_LONG_INTEGER Best;
    };

    static class SignalType // enum
    {
        static SIGNED_LONG_INTEGER VideoSignal;
        static SIGNED_LONG_INTEGER AudioSignal;
        static SIGNED_LONG_INTEGER VideoAndAudioSignal;
        static SIGNED_LONG_INTEGER USBSignal;
    };

    static class SignalGroupBehavior // enum
    {
        static SIGNED_LONG_INTEGER GeneralOutput;
        static SIGNED_LONG_INTEGER DistinctSwitchableOutput;
        static SIGNED_LONG_INTEGER MirroredOutput;
        static SIGNED_LONG_INTEGER BreakawaySwitchableOutput;
    };

     class SignalGroupType 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING Source[];
        static STRING Endpoint[];
        static STRING Midpoint[];
        static STRING Passthrough[];

        // class properties
    };

     class SerializationSignal 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER id;
        SIGNED_LONG_INTEGER num;
        SIGNED_LONG_INTEGER type;
        SIGNED_LONG_INTEGER transportType;
        STRING group[];

        // class properties
    };

     class SerializationSignalGroup 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER id;
        SIGNED_LONG_INTEGER outputBehavior;
        STRING type[];
        STRING name[];

        // class properties
    };

     class SerializationTarget 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING configFileVersion[];
        STRING systemUUID[];

        // class properties
    };

namespace Crestron.Rio.DataStructures;
        // class declarations
         class SerializationRoom;
         class SerializationRoomGroup;
         class SerializationGlobalMacro;
         class HomeScreenListItemActionType;
         class HomeScreenListItem;
         class SystemType;
         class SerializationUI;
         class SerializationSubsystem;
         class SerializationTreeNode;
         class SerializationTarget;
     class SerializationRoom 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER roomID;
        STRING roomName[];
        SIGNED_LONG_INTEGER icon;

        // class properties
    };

     class SerializationRoomGroup 
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

     class SerializationGlobalMacro 
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

    static class HomeScreenListItemActionType // enum
    {
        static SIGNED_LONG_INTEGER Invalid;
        static SIGNED_LONG_INTEGER Subsystem;
        static SIGNED_LONG_INTEGER SubpageFlip;
        static SIGNED_LONG_INTEGER PageFlip;
        static SIGNED_LONG_INTEGER Macro;
    };

    static class SystemType // enum
    {
        static SIGNED_LONG_INTEGER Residential;
        static SIGNED_LONG_INTEGER Commercial;
    };

     class SerializationUI 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER uiID;
        STRING uiName[];
        Crestron.Rio.DataStructures.SystemType uiSystemType;
        SIGNED_LONG_INTEGER uiStartupSubsystem;
        SIGNED_LONG_INTEGER uiPersistentSubsystem;
        SIGNED_LONG_INTEGER defaultRoomID;

        // class properties
    };

     class SerializationSubsystem 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER subsystemID;
        SIGNED_LONG_INTEGER subsystemIcon;
        STRING subsystemName[];
        STRING subsystemConfigFilePath[];

        // class properties
    };

     class SerializationTarget 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
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

        // class properties
    };

namespace Crestron.Rio.DataStructures.Media;
        // class declarations
         class EndpointInformation;
         class MediaRoomInformation;
         class MediaSourceInformation;
         class MediaGroupInformation;
         class MediaUIInformation;
         class AutoMediaRoutingInformation;
         class MediaSubsystemSerializationTarget;
     class EndpointInformation 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER ID;
        STRING name[];
        SIGNED_LONG_INTEGER StandbySourceId;

        // class properties
        AutoMediaRoutingInformation AutoMediaRoutingInformation;
    };

     class MediaRoomInformation 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER ID;
        SIGNED_LONG_INTEGER sourceListByIDs[];
        SIGNED_LONG_INTEGER crosspointID;
        SIGNED_LONG_INTEGER audioEndpointID;
        SIGNED_LONG_INTEGER primaryVideoEndpointID;
        SIGNED_LONG_INTEGER alternateVideoEndpointIDs[];

        // class properties
    };

     class MediaSourceInformation 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER ID;
        STRING name[];
        SIGNED_LONG_INTEGER icon;
        STRING iconFilename[];

        // class properties
    };

     class MediaGroupInformation 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER ID;
        SIGNED_LONG_INTEGER groupedRoomIDs[];

        // class properties
    };

     class MediaUIInformation 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER ID;
        SIGNED_LONG_INTEGER availableRoomIDs[];

        // class properties
    };

     class MediaSubsystemSerializationTarget 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING systemUUID[];
        SIGNED_LONG_INTEGER subsystemID;
        STRING configFileVersion[];
        STRING dynamicRoutingConfigFilePath[];
        Crestron.Rio.DataStructures.Media.EndpointInformation endpoints[];
        Crestron.Rio.DataStructures.Media.MediaRoomInformation rooms[];
        Crestron.Rio.DataStructures.Media.MediaSourceInformation sources[];
        Crestron.Rio.DataStructures.Media.MediaGroupInformation groups[];
        Crestron.Rio.DataStructures.Media.MediaUIInformation userInterfaces[];

        // class properties
    };

