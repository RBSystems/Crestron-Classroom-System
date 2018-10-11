namespace Crestron.Rio.DataStructures.Media.DistributionComponents;
        // class declarations
         class RoomEndpoint;
         class MediaRoom;
         class MediaRoomSSharpComponent;
         class MediaSource;
         class EndpointSSharpComponent;
         class Endpoint;
         class MediaSourceSSharpComponent;
           class DelegateString;
           class DelegateNoParameters;
           class DelegateInteger;
    static class RoomEndpoint // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER PrimaryVideo;
        static SIGNED_LONG_INTEGER AltVideo1;
        static SIGNED_LONG_INTEGER AltVideo2;
        static SIGNED_LONG_INTEGER AltVideo3;
    };

     class MediaRoom 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MediaSource ExpectedSource;
    };

     class MediaRoomSSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );

        // class events

        // class functions
        FUNCTION AssociateSSharpComponent ( SIGNED_LONG_INTEGER roomID );
        FUNCTION TurnRoomOn ();
        FUNCTION TurnRoomOff ();
        FUNCTION SetRoomSource ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION StartGroupVolumeUp ();
        FUNCTION StopGroupVolumeUp ();
        FUNCTION StartGroupVolumeDown ();
        FUNCTION StopGroupVolumeDown ();
        FUNCTION SetDNDOn ();
        FUNCTION SetDNDOff ();
        FUNCTION SetAudioFollowsEndpoint ( SIGNED_LONG_INTEGER endpoint );
        FUNCTION StandbyOn ();
        FUNCTION AutoMediaRoutingEnabled ();
        FUNCTION AutoMediaRoutingDisabled ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateString updateName;
        DelegateProperty DelegateNoParameters updateRoomOnFeedback;
        DelegateProperty DelegateNoParameters updateRoomOffFeedback;
        DelegateProperty DelegateInteger updateSelectedSourceID;
        DelegateProperty DelegateString updateSelectedSourceName;
        DelegateProperty DelegateString updateNowPlayingLine1;
        DelegateProperty DelegateString updateNowPlayingLine2;
        DelegateProperty DelegateInteger updateGroupVolumeTrackingEnabled;
        DelegateProperty DelegateInteger updateAudioEndpointVolumeTrackingSupport;
        DelegateProperty DelegateNoParameters updateAudioEndpointIsDefined;
        DelegateProperty DelegateNoParameters updateAudioEndpointOnFeedback;
        DelegateProperty DelegateNoParameters updateAudioEndpointOffFeedback;
        DelegateProperty DelegateNoParameters updateInterruptMuteActivation;
        DelegateProperty DelegateNoParameters updateInterruptMuteTermination;
        DelegateProperty DelegateInteger UpdateStandbyOn;
        DelegateProperty DelegateInteger UpdateStandbyOff;
        DelegateProperty DelegateInteger UpdateAutoMediaRoutingEnabledCallback;
        DelegateProperty DelegateInteger UpdateAutoMediaRoutingDisabledCallback;
    };

     class MediaSource 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION SetNext1Command ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION SetNext2Command ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION SetPrevious1Command ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION SetPrevious2Command ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION SetRePressCommand ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION SetStartCommand ();
        FUNCTION SetStopCommand ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static Crestron.Rio.DataStructures.Media.DistributionComponents.MediaSource StandbyPowerOnNoSource;
        static Crestron.Rio.DataStructures.Media.DistributionComponents.MediaSource NoSelection;

        // class properties
    };

     class EndpointSSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );

        // class events

        // class functions
        FUNCTION AssociateSSharpComponent ( SIGNED_LONG_INTEGER endpointID );
        FUNCTION TurnEndpointOn ();
        FUNCTION EndpointOffRequested ();
        FUNCTION SetEndpointSource ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION StandbyOn ();
        FUNCTION EnableAutoMediaRouting ();
        FUNCTION DisableAutoMediaRouting ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters turnHWOff;
        DelegateProperty DelegateString updateName;
        DelegateProperty DelegateInteger updateSelectedSourceID;
        DelegateProperty DelegateString updateSelectedSourceName;
        DelegateProperty DelegateString updateNowPlayingLine1;
        DelegateProperty DelegateString updateNowPlayingLine2;
        DelegateProperty DelegateInteger updateGroupVolumeUp;
        DelegateProperty DelegateInteger updateGroupVolumeDown;
        DelegateProperty DelegateInteger updateStandbyOn;
        DelegateProperty DelegateInteger updateStandbyOff;
        DelegateProperty DelegateInteger updateAutoMediaRoutingEnabled;
        DelegateProperty DelegateInteger updateAutoMediaRoutingDisabled;
        DelegateProperty DelegateInteger updateForcePowerOn;
    };

     class Endpoint 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER TransitioningSourceID;
        MediaSource ExpectedSource;
    };

     class MediaSourceSSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );
        delegate FUNCTION DelegateNoParameters ( );

        // class events

        // class functions
        FUNCTION AssociateSSharpComponent ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION SetNowPlayingLine1 ( STRING nowPlayingInformation );
        FUNCTION SetNowPlayingLine2 ( STRING nowPlayingInformation );
        FUNCTION TriggerNext1CommandUpdate ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerNext2CommandUpdate ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerPrevious1CommandUpdate ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerPrevious2CommandUpdate ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerRePressCommandUpdate ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerStartCommand ();
        FUNCTION TriggerStopCommand ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateInteger updateSourceUsage;
        DelegateProperty DelegateNoParameters updateSourceSelected;
        DelegateProperty DelegateInteger updateSourceNext1Command;
        DelegateProperty DelegateInteger updateSourceNext2Command;
        DelegateProperty DelegateInteger updateSourcePrevious1Command;
        DelegateProperty DelegateInteger updateSourcePrevious2Command;
        DelegateProperty DelegateInteger updateSourceRePressCommand;
        DelegateProperty DelegateNoParameters updateSourceStartCommand;
        DelegateProperty DelegateNoParameters updateSourceStopCommand;
    };

namespace Crestron.Rio.DataStructures.Media;
        // class declarations
         class MediaUserInterfaceViewModel;
         class MediaSubsystem;
         class MediaSourceSelector;
     class MediaUserInterfaceViewModel 
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

    static class MediaSubsystem 
    {
        // class delegates

        // class events
        static EventHandler MediaInitializationCompleteEvent ( EventArgs args );
        static EventHandler MediaMidpointInitializationCompleteEvent ( EventArgs args );

        // class functions
        static FUNCTION InitializationEventHandler ( SIGNED_LONG_INTEGER eventSubsystemID , STRING fileLocation , STRING systemUUID );
        static FUNCTION Initialize ( STRING fileLocation , STRING systemUUID );
        static STRING_FUNCTION GetMediaRoomName ( SIGNED_LONG_INTEGER roomID );
        static FUNCTION AllRoomsOff ();
        static FUNCTION AllRoomsOn ();
        static FUNCTION RequestInterruptMuteActivation ();
        static FUNCTION RequestInterruptMuteTermination ();
        static FUNCTION SetNext1Command ( SIGNED_LONG_INTEGER sourceID , SIGNED_LONG_INTEGER commandStateToSet );
        static FUNCTION SetNext2Command ( SIGNED_LONG_INTEGER sourceID , SIGNED_LONG_INTEGER commandStateToSet );
        static FUNCTION SetPrevious1Command ( SIGNED_LONG_INTEGER sourceID , SIGNED_LONG_INTEGER commandStateToSet );
        static FUNCTION SetPrevious2Command ( SIGNED_LONG_INTEGER sourceID , SIGNED_LONG_INTEGER commandStateToSet );
        static FUNCTION SetRePressCommand ( SIGNED_LONG_INTEGER sourceID , SIGNED_LONG_INTEGER commandStateToSet );
        static FUNCTION SetStartCommand ( SIGNED_LONG_INTEGER sourceID );
        static FUNCTION SetStopCommand ( SIGNED_LONG_INTEGER sourceID );
        static FUNCTION RouteAnalysisComplete ();
        static FUNCTION ProcessRouteStep ( STRING routeStepInformation );
        static FUNCTION InitializeGroups ();
        static FUNCTION RouteToRegisteredAutoMediaRoutingEndpoints ( SIGNED_LONG_INTEGER sourceId );
        static FUNCTION UnrouteFromRegisteredAutoMediaRoutingEndpoints ( SIGNED_LONG_INTEGER sourceId );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING configFileVersion[];

        // class properties
        SIGNED_LONG_INTEGER subsystemID;
    };

     class MediaSourceSelector 
    {
        // class delegates
        delegate FUNCTION DelegateShort ( SIGNED_INTEGER value );
        delegate FUNCTION DelegateShortString ( SIGNED_INTEGER intValue , SIMPLSHARPSTRING stringValue );
        delegate FUNCTION DelegateShortShort ( SIGNED_INTEGER value1 , SIGNED_INTEGER value2 );

        // class events

        // class functions
        FUNCTION SelectSourceIndex ( SIGNED_LONG_INTEGER sourceIndex );
        FUNCTION FilterByRoomID ( SIGNED_LONG_INTEGER roomID );
        FUNCTION FilterByEndpointID ( SIGNED_LONG_INTEGER endpoint );
        FUNCTION CurrentSourceID ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION Enable ();
        FUNCTION Disable ();
        FUNCTION SetUserInterfaceID ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateShort UpdateSelectedSourceIDCallback;
        DelegateProperty DelegateShort UpdateSelectedSourceIndexCallback;
        DelegateProperty DelegateShort UpdateSourceCountCallback;
        DelegateProperty DelegateShortString UpdateSourceNameCallback;
        DelegateProperty DelegateShortString UpdateSourceIconFilenameCallback;
        DelegateProperty DelegateShortShort UpdateSourceIsAvailableCallback;
        DelegateProperty DelegateShortShort UpdateSourceIsSyncDetectionAvailableCallback;
    };

namespace Crestron.Rio.DataStructures.Media.UserInterfaces;
        // class declarations
         class MediaRoomSelector;
         class MediaRoomVM;
         class UserInterfaceSSharpComponent;
         class MediaTouchScreenSSharpComponent;
         class ComparisonIconFilename;
         class MediaTouchScreenResidentialComponent;
         class MediaTouchScreenCommercialComponent;
         class DynamicMediaUserInterface;
         class MediaKeypadSSharpComponent;
         class SourceSharingVM;
         class MediaMLX3SSharpComponent;
         class MLX3Icon;
           class DelegateShort;
           class DelegateShortString;
           class DelegateShortShort;
           class DelegateIntegerArray;
           class DelegateIntegerString;
           class DelegateIntegerInteger;
     class MediaRoomSelector 
    {
        // class delegates
        delegate FUNCTION DelegateShort ( SIGNED_INTEGER value );
        delegate FUNCTION DelegateShortString ( SIGNED_INTEGER intValue , SIMPLSHARPSTRING stringValue );
        delegate FUNCTION DelegateShortShort ( SIGNED_INTEGER value1 , SIGNED_INTEGER value2 );

        // class events

        // class functions
        FUNCTION SelectRoomID ( SIGNED_LONG_INTEGER roomID );
        FUNCTION SelectRoomIndex ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION CollapseRoomIndex ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION ExpandRoomIndex ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION ToggleRoomExpansionIndex ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION SetUserInterfaceID ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateShort UpdateSelectedRoomIDCallback;
        DelegateProperty DelegateShort UpdateSelectedRoomIndexCallback;
        DelegateProperty DelegateShort UpdateRoomCountCallback;
        DelegateProperty DelegateShortString UpdateRoomNameCallback;
        DelegateProperty DelegateShortString UpdateRoomSourceNameCallback;
        DelegateProperty DelegateShortShort UpdateRoomIsParentCallback;
        DelegateProperty DelegateShortShort UpdateRoomHierarchyLevelCallback;
        DelegateProperty DelegateShortShort UpdateRoomIsMediaRoomCallback;
    };

     class MediaRoomVM 
    {
        // class delegates
        delegate FUNCTION DelegateShort ( SIGNED_INTEGER value );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );

        // class events

        // class functions
        FUNCTION AltVideo3RouteSourceID ( SIGNED_LONG_INTEGER sourceId );
        FUNCTION AltVideo3Off ();
        FUNCTION AltVideo3StandbyOn ();
        FUNCTION AltVideo3AutoMediaRoutingEnable ();
        FUNCTION AltVideo3AutoMediaRoutingDisable ();
        FUNCTION CanSourceIDRouteToEndpoint ( SIGNED_LONG_INTEGER isSourceRouteAvailable );
        FUNCTION BeginTemporaryIgnoreSourceSelection ();
        FUNCTION EndTemporaryIgnoreSourceSelection ();
        FUNCTION DoNotDisturbOn ();
        FUNCTION DoNotDisturbOff ();
        FUNCTION DoNoDisturbToggle ();
        FUNCTION PrimaryVideoRouteSourceID ( SIGNED_LONG_INTEGER sourceId );
        FUNCTION PrimaryVideoOff ();
        FUNCTION PrimaryVideoStandbyOn ();
        FUNCTION PrimaryVideoAutoMediaRoutingEnable ();
        FUNCTION PrimaryVideoAutoMediaRoutingDisable ();
        FUNCTION AltVideo1RouteSourceID ( SIGNED_LONG_INTEGER sourceId );
        FUNCTION AltVideo1Off ();
        FUNCTION AltVideo1StandbyOn ();
        FUNCTION AltVideo1AutoMediaRoutingEnable ();
        FUNCTION AltVideo1AutoMediaRoutingDisable ();
        FUNCTION AltVideo2RouteSourceID ( SIGNED_LONG_INTEGER sourceId );
        FUNCTION AltVideo2Off ();
        FUNCTION AltVideo2StandbyOn ();
        FUNCTION AltVideo2AutoMediaRoutingEnable ();
        FUNCTION AltVideo2AutoMediaRoutingDisable ();
        FUNCTION SelectRoomID ( SIGNED_LONG_INTEGER roomId );
        FUNCTION PowerOn ();
        FUNCTION PowerOff ();
        FUNCTION PowerToggle ();
        FUNCTION AllRoomsWithSelectedSourceOff ();
        FUNCTION AllRoomsOff ();
        FUNCTION StandbyOn ();
        FUNCTION EnableAutoMediaRouting ();
        FUNCTION DisableAutoMediaRouting ();
        FUNCTION SelectCurrentlyControlledEndpoint ( SIGNED_LONG_INTEGER roomEndpoint );
        FUNCTION CurrentlyControlledRouteSourceID ( SIGNED_LONG_INTEGER sourceId );
        FUNCTION CurrentlyControlledEndpointOff ();
        FUNCTION CurrentlyControlledEndpointStandby ();
        FUNCTION AudioRouteSourceID ( SIGNED_LONG_INTEGER sourceId );
        FUNCTION AudioOff ();
        FUNCTION SetUserInterfaceID ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateShort UpdateRoomIDCallback;
        DelegateProperty DelegateShort UpdateCrosspointIDCallback;
        DelegateProperty DelegateString UpdateRoomNameCallback;
        DelegateProperty DelegateShort UpdateIsOnCallback;
        DelegateProperty DelegateShort UpdateStandbyOnCallback;
        DelegateProperty DelegateShort UpdateStandbyOffCallback;
        DelegateProperty DelegateShort UpdateAutoMediaRoutingEnabledCallback;
        DelegateProperty DelegateShort UpdateAutoMediaRoutingDisabledCallback;
        DelegateProperty DelegateShort UpdateCurrentlyControlledSourceIDCallback;
        DelegateProperty DelegateString UpdateCurrentlyControlledSourceNameCallback;
        DelegateProperty DelegateString UpdateCurrentlyControlledSourceIconFilenameCallback;
        DelegateProperty DelegateString UpdateCurrentlyControlledSourceNowPlayingLine1Callback;
        DelegateProperty DelegateString UpdateCurrentlyControlledSourceNowPlayingLine2Callback;
        DelegateProperty DelegateString UpdateCurrentlyControlledEndpointNameCallback;
        DelegateProperty DelegateShort UpdateCurrentlyControlledSourceIsAvailableCallback;
        DelegateProperty DelegateShort UpdateCurrentlyControlledEndpointStandbyOnCallback;
        DelegateProperty DelegateShort UpdateCurrentlyControlledEndpointStandbyOffCallback;
        DelegateProperty DelegateShort UpdateAudioEndpointIsOnCallback;
        DelegateProperty DelegateShort UpdateAudioEndpointIDCallback;
        DelegateProperty DelegateString UpdateAudioEndpointNameCallback;
        DelegateProperty DelegateShort UpdateAudioSourceIDCallback;
        DelegateProperty DelegateString UpdateAudioSourceNameCallback;
        DelegateProperty DelegateString UpdateAudioSourceIconFilenameCallback;
        DelegateProperty DelegateString UpdateAudioSourceNowPlayingLine1Callback;
        DelegateProperty DelegateString UpdateAudioSourceNowPlayingLine2Callback;
        DelegateProperty DelegateShort UpdateAudioBreakawayCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoEndpointIsOnCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoEndpointIDCallback;
        DelegateProperty DelegateString UpdatePrimaryVideoEndpointNameCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoSourceIDCallback;
        DelegateProperty DelegateString UpdatePrimaryVideoSourceNameCallback;
        DelegateProperty DelegateString UpdatePrimaryVideoSourceIconFilenameCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoStandbyOnCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoStandbyOffCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoAutoMediaRoutingEnabledCallback;
        DelegateProperty DelegateShort UpdatePrimaryVideoAutoMediaRoutingDisabledCallback;
        DelegateProperty DelegateShort UpdateAltVideo1EndpointIsOnCallback;
        DelegateProperty DelegateShort UpdateAltVideo1EndpointIDCallback;
        DelegateProperty DelegateString UpdateAltVideo1EndpointNameCallback;
        DelegateProperty DelegateShort UpdateAltVideo1SourceIDCallback;
        DelegateProperty DelegateString UpdateAltVideo1SourceNameCallback;
        DelegateProperty DelegateString UpdateAltVideo1SourceIconFilenameCallback;
        DelegateProperty DelegateShort UpdateAltVideo1StandbyOnCallback;
        DelegateProperty DelegateShort UpdateAltVideo1StandbyOffCallback;
        DelegateProperty DelegateShort UpdateAltVideo1AutoMediaRoutingEnabledCallback;
        DelegateProperty DelegateShort UpdateAltVideo1AutoMediaRoutingDisabledCallback;
        DelegateProperty DelegateShort UpdateAltVideo2EndpointIsOnCallback;
        DelegateProperty DelegateShort UpdateAltVideo2EndpointIDCallback;
        DelegateProperty DelegateString UpdateAltVideo2EndpointNameCallback;
        DelegateProperty DelegateShort UpdateAltVideo2SourceIDCallback;
        DelegateProperty DelegateString UpdateAltVideo2SourceNameCallback;
        DelegateProperty DelegateString UpdateAltVideo2SourceIconFilenameCallback;
        DelegateProperty DelegateShort UpdateAltVideo2StandbyOnCallback;
        DelegateProperty DelegateShort UpdateAltVideo2StandbyOffCallback;
        DelegateProperty DelegateShort UpdateAltVideo2AutoMediaRoutingEnabledCallback;
        DelegateProperty DelegateShort UpdateAltVideo2AutoMediaRoutingDisabledCallback;
        DelegateProperty DelegateShort UpdateAltVideo3EndpointIsOnCallback;
        DelegateProperty DelegateShort UpdateAltVideo3EndpointIDCallback;
        DelegateProperty DelegateString UpdateAltVideo3EndpointNameCallback;
        DelegateProperty DelegateShort UpdateAltVideo3SourceIDCallback;
        DelegateProperty DelegateString UpdateAltVideo3SourceNameCallback;
        DelegateProperty DelegateString UpdateAltVideo3SourceIconFilenameCallback;
        DelegateProperty DelegateShort UpdateAltVideo3StandbyOnCallback;
        DelegateProperty DelegateShort UpdateAltVideo3StandbyOffCallback;
        DelegateProperty DelegateShort UpdateAltVideo3AutoMediaRoutingEnabledCallback;
        DelegateProperty DelegateShort UpdateAltVideo3AutoMediaRoutingDisabledCallback;
        DelegateProperty DelegateShort UpdateSourceIDCanRouteToCurrentlyControlledEndpointCallback;
        DelegateProperty DelegateShort UpdateSourceIDCanRouteToAudioCallback;
        DelegateProperty DelegateShort UpdateSourceIDCanRouteToPrimaryVideoCallback;
        DelegateProperty DelegateShort UpdateSourceIDCanRouteToAltVideo1Callback;
        DelegateProperty DelegateShort UpdateSourceIDCanRouteToAltVideo2Callback;
        DelegateProperty DelegateShort UpdateSourceIDCanRouteToAltVideo3Callback;
        DelegateProperty DelegateShort UpdateVideoEndpointCountCallback;
        DelegateProperty DelegateShort UpdateDoNotDisturbIsOnCallback;
    };

     class UserInterfaceSSharpComponent 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class MediaTouchScreenSSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );
        delegate FUNCTION DelegateIntegerArray ( SIGNED_LONG_INTEGER value[] );
        delegate FUNCTION DelegateIntegerString ( SIGNED_LONG_INTEGER intValue , SIMPLSHARPSTRING stringValue );

        // class events

        // class functions
        FUNCTION RequestMediaHomePage ();
        FUNCTION RequestRoomControl ( SIGNED_LONG_INTEGER newRoomID );
        FUNCTION TurnRoomOn ();
        FUNCTION TurnRoomOff ();
        FUNCTION TurnSelectedEndpointOff ();
        FUNCTION RoomListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION SourceListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION EndpointListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ActiveSourcesListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ShareSourceWithAll ();
        FUNCTION TurnOffAllRoomsWithCurrentSource ();
        FUNCTION BeginInitialization ( SIGNED_LONG_INTEGER touchScreenID );
        FUNCTION RequestSourceSelectionPage ();
        FUNCTION RequestStandardSourceSelectionPage ();
        FUNCTION RequestAdvancedSourceSelectionPage ();
        FUNCTION RequestRoomSelectionPage ();
        FUNCTION RequestSourceSharingPage ();
        FUNCTION RequestActiveSourceControl ();
        FUNCTION DismissActivePage ();
        FUNCTION SourceControlPageVerified ();
        FUNCTION SetAdvancedSourceSelectionButtonBehavior ( INTEGER buttonBehavior );
        FUNCTION ShowBasePage ();
        FUNCTION RequestSelectedEndpointActiveSourcePage ();
        FUNCTION RequestSpecificSourceControl ( SIGNED_LONG_INTEGER requestedSourceID );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters touchScreenInitialized;
        DelegateProperty DelegateNoParameters mediaMidpointsInitialized;
        DelegateProperty DelegateInteger connectNewRoom;
        DelegateProperty DelegateNoParameters setRoomOnFeedback;
        DelegateProperty DelegateNoParameters setRoomOffFeedback;
        DelegateProperty DelegateInteger updateSelectedRoomID;
        DelegateProperty DelegateInteger updateSelectedSourceID;
        DelegateProperty DelegateString updateSelectedRoomName;
        DelegateProperty DelegateString updateSelectedSourceName;
        DelegateProperty DelegateString updateNowPlayingLine1;
        DelegateProperty DelegateString updateNowPlayingLine2;
        DelegateProperty DelegateString updateSelectedEndpointName;
        DelegateProperty DelegateString updateSelectedEndpointActiveSourceName;
        DelegateProperty DelegateString updateSelectedEndpointActiveSourceIcon;
        DelegateProperty DelegateInteger updateSelectedEndpointHasActiveSource;
        DelegateProperty DelegateString updateSourceDisplayName;
        DelegateProperty DelegateString updateControlledSourceName;
        DelegateProperty DelegateString updateControlledSourceIcon;
        DelegateProperty DelegateInteger updateAudioEndpointSourceID;
        DelegateProperty DelegateString updateAudioEndpointName;
        DelegateProperty DelegateString updateAudioEndpointSourceName;
        DelegateProperty DelegateInteger updatePrimaryVideoEndpointSourceID;
        DelegateProperty DelegateString updatePrimaryVideoEndpointName;
        DelegateProperty DelegateString updatePrimaryVideoEndpointSourceName;
        DelegateProperty DelegateIntegerArray updateAlternateVideoEndpointSourceIDByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointNameByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointSourceNameByIndex;
        DelegateProperty DelegateInteger clearRemainingAlternateVideoEndpoints;
        DelegateProperty DelegateIntegerString updateRoomListRoomNameByIndex;
        DelegateProperty DelegateIntegerString updateRoomListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateSourceSharingListActiveSourceComparisonByIndex;
        DelegateProperty DelegateIntegerArray updateSourceSharingListSelectionEnabledByIndex;
        DelegateProperty DelegateInteger updateRoomListItemCount;
        DelegateProperty DelegateInteger updateSourceSharingButtonVisibility;
        DelegateProperty DelegateIntegerString updateSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateSourceListIconByIndex;
        DelegateProperty DelegateInteger updateSourceListItemCount;
        DelegateProperty DelegateIntegerArray updateSourceListItemActiveByIndex;
        DelegateProperty DelegateString updateSourceListSelectedSourceName;
        DelegateProperty DelegateIntegerString updateEndpointListNameByIndex;
        DelegateProperty DelegateIntegerString updateEndpointListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateEndpointListSourceComparisonByIndex;
        DelegateProperty DelegateIntegerArray updateEndpointListSelectionEnabledByIndex;
        DelegateProperty DelegateInteger updateEndpointListItemCount;
        DelegateProperty DelegateInteger updateShowAdvancedSourceSelectButton;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceIconByIndex;
        DelegateProperty DelegateInteger updateActiveSourceListItemCount;
        DelegateProperty DelegateInteger updateSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateAdvancedSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateRoomSelectionVisibility;
        DelegateProperty DelegateInteger updateSourceSharingVisibility;
        DelegateProperty DelegateInteger updateActiveSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateRequestedSourceControlPage;
        DelegateProperty DelegateInteger updateMediaPageActive;
    };

    static class ComparisonIconFilename 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING checkMark[];
        static STRING blank[];
        static STRING locked[];

        // class properties
    };

     class MediaTouchScreenResidentialComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );
        delegate FUNCTION DelegateIntegerArray ( SIGNED_LONG_INTEGER value[] );
        delegate FUNCTION DelegateIntegerString ( SIGNED_LONG_INTEGER intValue , SIMPLSHARPSTRING stringValue );

        // class events

        // class functions
        FUNCTION RequestSourceSelectionPage ();
        FUNCTION RequestActiveSourceControl ();
        FUNCTION RequestSpecificSourceControl ( SIGNED_LONG_INTEGER requestedSourceID );
        FUNCTION EndpointListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION SourceListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION TurnRoomOn ();
        FUNCTION TurnRoomOff ();
        FUNCTION RequestMediaHomePage ();
        FUNCTION RequestRoomControl ( SIGNED_LONG_INTEGER newRoomID );
        FUNCTION TurnSelectedEndpointOff ();
        FUNCTION RoomListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ActiveSourcesListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ShareSourceWithAll ();
        FUNCTION TurnOffAllRoomsWithCurrentSource ();
        FUNCTION BeginInitialization ( SIGNED_LONG_INTEGER touchScreenID );
        FUNCTION RequestStandardSourceSelectionPage ();
        FUNCTION RequestAdvancedSourceSelectionPage ();
        FUNCTION RequestRoomSelectionPage ();
        FUNCTION RequestSourceSharingPage ();
        FUNCTION DismissActivePage ();
        FUNCTION SourceControlPageVerified ();
        FUNCTION SetAdvancedSourceSelectionButtonBehavior ( INTEGER buttonBehavior );
        FUNCTION ShowBasePage ();
        FUNCTION RequestSelectedEndpointActiveSourcePage ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters touchScreenInitialized;
        DelegateProperty DelegateNoParameters mediaMidpointsInitialized;
        DelegateProperty DelegateInteger connectNewRoom;
        DelegateProperty DelegateNoParameters setRoomOnFeedback;
        DelegateProperty DelegateNoParameters setRoomOffFeedback;
        DelegateProperty DelegateInteger updateSelectedRoomID;
        DelegateProperty DelegateInteger updateSelectedSourceID;
        DelegateProperty DelegateString updateSelectedRoomName;
        DelegateProperty DelegateString updateSelectedSourceName;
        DelegateProperty DelegateString updateNowPlayingLine1;
        DelegateProperty DelegateString updateNowPlayingLine2;
        DelegateProperty DelegateString updateSelectedEndpointName;
        DelegateProperty DelegateString updateSelectedEndpointActiveSourceName;
        DelegateProperty DelegateString updateSelectedEndpointActiveSourceIcon;
        DelegateProperty DelegateInteger updateSelectedEndpointHasActiveSource;
        DelegateProperty DelegateString updateSourceDisplayName;
        DelegateProperty DelegateString updateControlledSourceName;
        DelegateProperty DelegateString updateControlledSourceIcon;
        DelegateProperty DelegateInteger updateAudioEndpointSourceID;
        DelegateProperty DelegateString updateAudioEndpointName;
        DelegateProperty DelegateString updateAudioEndpointSourceName;
        DelegateProperty DelegateInteger updatePrimaryVideoEndpointSourceID;
        DelegateProperty DelegateString updatePrimaryVideoEndpointName;
        DelegateProperty DelegateString updatePrimaryVideoEndpointSourceName;
        DelegateProperty DelegateIntegerArray updateAlternateVideoEndpointSourceIDByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointNameByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointSourceNameByIndex;
        DelegateProperty DelegateInteger clearRemainingAlternateVideoEndpoints;
        DelegateProperty DelegateIntegerString updateRoomListRoomNameByIndex;
        DelegateProperty DelegateIntegerString updateRoomListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateSourceSharingListActiveSourceComparisonByIndex;
        DelegateProperty DelegateIntegerArray updateSourceSharingListSelectionEnabledByIndex;
        DelegateProperty DelegateInteger updateRoomListItemCount;
        DelegateProperty DelegateInteger updateSourceSharingButtonVisibility;
        DelegateProperty DelegateIntegerString updateSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateSourceListIconByIndex;
        DelegateProperty DelegateInteger updateSourceListItemCount;
        DelegateProperty DelegateIntegerArray updateSourceListItemActiveByIndex;
        DelegateProperty DelegateString updateSourceListSelectedSourceName;
        DelegateProperty DelegateIntegerString updateEndpointListNameByIndex;
        DelegateProperty DelegateIntegerString updateEndpointListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateEndpointListSourceComparisonByIndex;
        DelegateProperty DelegateIntegerArray updateEndpointListSelectionEnabledByIndex;
        DelegateProperty DelegateInteger updateEndpointListItemCount;
        DelegateProperty DelegateInteger updateShowAdvancedSourceSelectButton;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceIconByIndex;
        DelegateProperty DelegateInteger updateActiveSourceListItemCount;
        DelegateProperty DelegateInteger updateSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateAdvancedSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateRoomSelectionVisibility;
        DelegateProperty DelegateInteger updateSourceSharingVisibility;
        DelegateProperty DelegateInteger updateActiveSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateRequestedSourceControlPage;
        DelegateProperty DelegateInteger updateMediaPageActive;
    };

     class MediaTouchScreenCommercialComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );
        delegate FUNCTION DelegateIntegerArray ( SIGNED_LONG_INTEGER value[] );
        delegate FUNCTION DelegateIntegerString ( SIGNED_LONG_INTEGER intValue , SIMPLSHARPSTRING stringValue );

        // class events

        // class functions
        FUNCTION RequestSourceSelectionPage ();
        FUNCTION RequestActiveSourceControl ();
        FUNCTION RequestSpecificSourceControl ( SIGNED_LONG_INTEGER requestedSourceID );
        FUNCTION EndpointListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION SourceListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION RequestSelectedEndpointActiveSourcePage ();
        FUNCTION TurnRoomOn ();
        FUNCTION TurnRoomOff ();
        FUNCTION TurnSelectedEndpointOff ();
        FUNCTION RequestMediaHomePage ();
        FUNCTION RequestRoomControl ( SIGNED_LONG_INTEGER newRoomID );
        FUNCTION RoomListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ActiveSourcesListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ShareSourceWithAll ();
        FUNCTION TurnOffAllRoomsWithCurrentSource ();
        FUNCTION BeginInitialization ( SIGNED_LONG_INTEGER touchScreenID );
        FUNCTION RequestStandardSourceSelectionPage ();
        FUNCTION RequestAdvancedSourceSelectionPage ();
        FUNCTION RequestRoomSelectionPage ();
        FUNCTION RequestSourceSharingPage ();
        FUNCTION DismissActivePage ();
        FUNCTION SourceControlPageVerified ();
        FUNCTION SetAdvancedSourceSelectionButtonBehavior ( INTEGER buttonBehavior );
        FUNCTION ShowBasePage ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters touchScreenInitialized;
        DelegateProperty DelegateNoParameters mediaMidpointsInitialized;
        DelegateProperty DelegateInteger connectNewRoom;
        DelegateProperty DelegateNoParameters setRoomOnFeedback;
        DelegateProperty DelegateNoParameters setRoomOffFeedback;
        DelegateProperty DelegateInteger updateSelectedRoomID;
        DelegateProperty DelegateInteger updateSelectedSourceID;
        DelegateProperty DelegateString updateSelectedRoomName;
        DelegateProperty DelegateString updateSelectedSourceName;
        DelegateProperty DelegateString updateNowPlayingLine1;
        DelegateProperty DelegateString updateNowPlayingLine2;
        DelegateProperty DelegateString updateSelectedEndpointName;
        DelegateProperty DelegateString updateSelectedEndpointActiveSourceName;
        DelegateProperty DelegateString updateSelectedEndpointActiveSourceIcon;
        DelegateProperty DelegateInteger updateSelectedEndpointHasActiveSource;
        DelegateProperty DelegateString updateSourceDisplayName;
        DelegateProperty DelegateString updateControlledSourceName;
        DelegateProperty DelegateString updateControlledSourceIcon;
        DelegateProperty DelegateInteger updateAudioEndpointSourceID;
        DelegateProperty DelegateString updateAudioEndpointName;
        DelegateProperty DelegateString updateAudioEndpointSourceName;
        DelegateProperty DelegateInteger updatePrimaryVideoEndpointSourceID;
        DelegateProperty DelegateString updatePrimaryVideoEndpointName;
        DelegateProperty DelegateString updatePrimaryVideoEndpointSourceName;
        DelegateProperty DelegateIntegerArray updateAlternateVideoEndpointSourceIDByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointNameByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointSourceNameByIndex;
        DelegateProperty DelegateInteger clearRemainingAlternateVideoEndpoints;
        DelegateProperty DelegateIntegerString updateRoomListRoomNameByIndex;
        DelegateProperty DelegateIntegerString updateRoomListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateSourceSharingListActiveSourceComparisonByIndex;
        DelegateProperty DelegateIntegerArray updateSourceSharingListSelectionEnabledByIndex;
        DelegateProperty DelegateInteger updateRoomListItemCount;
        DelegateProperty DelegateInteger updateSourceSharingButtonVisibility;
        DelegateProperty DelegateIntegerString updateSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateSourceListIconByIndex;
        DelegateProperty DelegateInteger updateSourceListItemCount;
        DelegateProperty DelegateIntegerArray updateSourceListItemActiveByIndex;
        DelegateProperty DelegateString updateSourceListSelectedSourceName;
        DelegateProperty DelegateIntegerString updateEndpointListNameByIndex;
        DelegateProperty DelegateIntegerString updateEndpointListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateEndpointListSourceComparisonByIndex;
        DelegateProperty DelegateIntegerArray updateEndpointListSelectionEnabledByIndex;
        DelegateProperty DelegateInteger updateEndpointListItemCount;
        DelegateProperty DelegateInteger updateShowAdvancedSourceSelectButton;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceIconByIndex;
        DelegateProperty DelegateInteger updateActiveSourceListItemCount;
        DelegateProperty DelegateInteger updateSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateAdvancedSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateRoomSelectionVisibility;
        DelegateProperty DelegateInteger updateSourceSharingVisibility;
        DelegateProperty DelegateInteger updateActiveSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateRequestedSourceControlPage;
        DelegateProperty DelegateInteger updateMediaPageActive;
    };

     class DynamicMediaUserInterface 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );

        // class events

        // class functions
        FUNCTION Initialize ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.Rio.DataStructures.Media.UserInterfaces.MediaTouchScreenSSharpComponent mediaUIComponent;

        // class properties
        DelegateProperty DelegateNoParameters RegisterSimplDelegates;
    };

     class MediaKeypadSSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );

        // class events

        // class functions
        FUNCTION BeginInitialization ( SIGNED_LONG_INTEGER keypadID );
        FUNCTION TurnRoomOn ();
        FUNCTION TurnRoomOff ();
        FUNCTION TriggerSourceNEXT1 ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerSourceNEXT2 ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerSourcePREV1 ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerSourcePREV2 ( SIGNED_LONG_INTEGER commandStateToSet );
        FUNCTION TriggerSourceSTART ();
        FUNCTION TriggerSourceSTOP ();
        FUNCTION SetKeypadSourceByID ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION SetSourceOrRePressByID ( SIGNED_LONG_INTEGER sourceID );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters keypadInitialized;
        DelegateProperty DelegateInteger connectNewRoom;
        DelegateProperty DelegateNoParameters setRoomOnFeedback;
        DelegateProperty DelegateNoParameters setRoomOffFeedback;
        DelegateProperty DelegateInteger updateSelectedSourceID;
    };

     class SourceSharingVM 
    {
        // class delegates
        delegate FUNCTION DelegateShort ( SIGNED_INTEGER value );
        delegate FUNCTION DelegateShortString ( SIGNED_INTEGER intValue , SIMPLSHARPSTRING stringValue );
        delegate FUNCTION DelegateShortShort ( SIGNED_INTEGER value1 , SIGNED_INTEGER value2 );

        // class events

        // class functions
        FUNCTION SetSourceID ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION TurnOffRoom ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION RouteSourceToRoom ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION RouteSourceToAllRooms ();
        FUNCTION VolumeUp ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION VolumeDown ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION VolumeMuteToggle ( SIGNED_LONG_INTEGER roomIndex );
        FUNCTION SetUserInterfaceID ( SIGNED_LONG_INTEGER id );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateShort UpdateRoomCountCallback;
        DelegateProperty DelegateShort UpdateSelectedSourceIDCallback;
        DelegateProperty DelegateShortString UpdateRoomNameCallback;
        DelegateProperty DelegateShortString UpdateRoomSourceNameCallback;
        DelegateProperty DelegateShortString UpdateRoomSourceIconFilenameCallback;
        DelegateProperty DelegateShortShort UpdateSourceIsRoutedCallback;
        DelegateProperty DelegateShortShort UpdateRoomVolumeLevelCallback;
        DelegateProperty DelegateShortString UpdateVolumeLevelTextCallback;
        DelegateProperty DelegateShortShort UpdateVolumeAdjustIsAvailableCallback;
        DelegateProperty DelegateShortShort UpdateVolumeFeedbackIsAvailableCallback;
        DelegateProperty DelegateShortShort UpdateRoomIsMutedCallback;
        DelegateProperty DelegateShortShort UpdateRoomMuteAvailableCallback;
    };

     class MediaMLX3SSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );
        delegate FUNCTION DelegateIntegerInteger ( SIGNED_LONG_INTEGER value1 , SIGNED_LONG_INTEGER value2 );
        delegate FUNCTION DelegateIntegerString ( SIGNED_LONG_INTEGER intValue , SIMPLSHARPSTRING stringValue );

        // class events

        // class functions
        FUNCTION RoomListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION RoomSelectBackButtonPressed ();
        FUNCTION SourceListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION SourceSelectBackButtonPressed ();
        FUNCTION ActiveSourcesListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION ActiveSourcesBackButtonPressed ();
        FUNCTION SourceSharingBackButtonPressed ();
        FUNCTION ShareSourceWithAll ();
        FUNCTION SourceSharingItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION TurnOffAllRoomsWithCurrentSource ();
        FUNCTION EndpointListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION EndpointSelectBackButtonPressed ();
        FUNCTION SleepMenuBackButtonPressed ();
        FUNCTION SleepTimerWarningTriggered ();
        FUNCTION TriggerSourceNEXT1 ( SIGNED_LONG_INTEGER state );
        FUNCTION TriggerSourceNEXT2 ( SIGNED_LONG_INTEGER state );
        FUNCTION TriggerSourcePREV1 ( SIGNED_LONG_INTEGER state );
        FUNCTION TriggerSourcePREV2 ( SIGNED_LONG_INTEGER state );
        FUNCTION TriggerSourceSTART ();
        FUNCTION TriggerSourceSTOP ();
        FUNCTION BeginInitialization ( SIGNED_LONG_INTEGER touchScreenID );
        FUNCTION OnMediaMenu ();
        FUNCTION MediaMenuListItemSelected ( SIGNED_LONG_INTEGER index );
        FUNCTION MediaMenuBackButtonPressed ();
        FUNCTION RequestMediaMenuPage ();
        FUNCTION RequestStandardSourceSelectionPage ();
        FUNCTION RequestAdvancedSourceSelectionPage ();
        FUNCTION RequestRoomSelectionPage ();
        FUNCTION RequestSourceSharingPage ();
        FUNCTION RequestActiveSourceControl ();
        FUNCTION UpdateActiveSourceControlPage ( SIGNED_LONG_INTEGER sourceID );
        FUNCTION UpdateOnOSDControlPage ( SIGNED_LONG_INTEGER osdPageShowing );
        FUNCTION RequestRoomControl ( SIGNED_LONG_INTEGER newRoomID );
        FUNCTION TurnRoomOn ();
        FUNCTION TurnRoomOff ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters touchScreenInitialized;
        DelegateProperty DelegateInteger connectNewRoom;
        DelegateProperty DelegateNoParameters setRoomOnFeedback;
        DelegateProperty DelegateNoParameters setRoomOffFeedback;
        DelegateProperty DelegateInteger updateSelectedRoomID;
        DelegateProperty DelegateInteger updateSelectedSourceID;
        DelegateProperty DelegateString updateSelectedRoomName;
        DelegateProperty DelegateString updateSelectedSourceName;
        DelegateProperty DelegateString updateNowPlayingLine1;
        DelegateProperty DelegateString updateNowPlayingLine2;
        DelegateProperty DelegateInteger updateAudioEndpointSourceID;
        DelegateProperty DelegateString updateAudioEndpointName;
        DelegateProperty DelegateString updateAudioEndpointSourceName;
        DelegateProperty DelegateInteger updatePrimaryVideoEndpointSourceID;
        DelegateProperty DelegateString updatePrimaryVideoEndpointName;
        DelegateProperty DelegateString updatePrimaryVideoEndpointSourceName;
        DelegateProperty DelegateIntegerInteger updateAlternateVideoEndpointSourceIDByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointNameByIndex;
        DelegateProperty DelegateIntegerString updateAlternateVideoEndpointSourceNameByIndex;
        DelegateProperty DelegateInteger clearRemainingAlternateVideoEndpoints;
        DelegateProperty DelegateIntegerString updateRoomListRoomNameByIndex;
        DelegateProperty DelegateInteger updateRoomListItemCount;
        DelegateProperty DelegateIntegerString updateSourceSharingListItemByIndex;
        DelegateProperty DelegateIntegerInteger updateSourceSharingListIconByIndex;
        DelegateProperty DelegateInteger updateSourceSharingListItemCount;
        DelegateProperty DelegateIntegerString updateSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerInteger updateSourceListIconByIndex;
        DelegateProperty DelegateInteger updateSourceListItemCount;
        DelegateProperty DelegateIntegerString updateEndpointListNameByIndex;
        DelegateProperty DelegateIntegerInteger updateEndpointListIconByIndex;
        DelegateProperty DelegateInteger updateEndpointListItemCount;
        DelegateProperty DelegateIntegerString updateActiveSourceListSourceNameByIndex;
        DelegateProperty DelegateIntegerInteger updateActiveSourceListSourceIconByIndex;
        DelegateProperty DelegateInteger updateActiveSourceListItemCount;
        DelegateProperty DelegateInteger updateSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateEndpointSelectionVisibility;
        DelegateProperty DelegateInteger updateRoomSelectionVisibility;
        DelegateProperty DelegateInteger updateSourceSharingVisibility;
        DelegateProperty DelegateInteger updateActiveSourceSelectionVisibility;
        DelegateProperty DelegateInteger updateMediaMenuVisibility;
        DelegateProperty DelegateInteger updateSleepVisibility;
        DelegateProperty DelegateInteger updateRequestedSourceControlPage;
        DelegateProperty DelegateIntegerString updateMediaMenuList;
        DelegateProperty DelegateIntegerInteger updateMediaMenuListIcon;
        DelegateProperty DelegateInteger updateMediaMenuListItemCount;
        DelegateProperty DelegateInteger updateMediaMenuHighlightOut;
        DelegateProperty DelegateInteger updateSourceListHighlightOut;
        DelegateProperty DelegateInteger updateEndpointListHighlightOut;
        DelegateProperty DelegateInteger updateActiveSourcesListHighlightOut;
        DelegateProperty DelegateInteger updateSourceSharingListHighlightOut;
    };

    static class MLX3Icon // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER AllAVOff_Built_in;
        static SIGNED_LONG_INTEGER Delete_Built_in;
        static SIGNED_LONG_INTEGER Live_Built_in;
        static SIGNED_LONG_INTEGER NextDisc_Built_in;
        static SIGNED_LONG_INTEGER PreviousDisc_Built_in;
        static SIGNED_LONG_INTEGER RepeatAll_Built_in;
        static SIGNED_LONG_INTEGER Repreat1_Built_in;
        static SIGNED_LONG_INTEGER ShareSource_Built_in;
        static SIGNED_LONG_INTEGER Shuffle_Built_in;
        static SIGNED_LONG_INTEGER ThumbsDown_Built_in;
        static SIGNED_LONG_INTEGER ThumbsUp_Built_in;
        static SIGNED_LONG_INTEGER alarm_Built_in;
        static SIGNED_LONG_INTEGER AudioGroups_Built_in;
        static SIGNED_LONG_INTEGER audio_Built_in;
        static SIGNED_LONG_INTEGER CheckMark_Built_in;
        static SIGNED_LONG_INTEGER coolmode_Built_in;
        static SIGNED_LONG_INTEGER cooloffmode_Built_in;
        static SIGNED_LONG_INTEGER CrestronSwirl_Built_in;
        static SIGNED_LONG_INTEGER door_Built_in;
        static SIGNED_LONG_INTEGER DownArrow_Built_in;
        static SIGNED_LONG_INTEGER fanon_Built_in;
        static SIGNED_LONG_INTEGER fan_Built_in;
        static SIGNED_LONG_INTEGER heatmode_Built_in;
        static SIGNED_LONG_INTEGER heatoffmode_Built_in;
        static SIGNED_LONG_INTEGER home_Built_in;
        static SIGNED_LONG_INTEGER listindicator_Built_in;
        static SIGNED_LONG_INTEGER Minus_Built_in;
        static SIGNED_LONG_INTEGER Plus_Built_in;
        static SIGNED_LONG_INTEGER Presets_Built_in;
        static SIGNED_LONG_INTEGER UpArrow_Built_in;
        static SIGNED_LONG_INTEGER AllOff_Built_in;
        static SIGNED_LONG_INTEGER Away_Built_in;
        static SIGNED_LONG_INTEGER DimIncandescentrepresentsoff_Built_in;
        static SIGNED_LONG_INTEGER Florescent_Built_in;
        static SIGNED_LONG_INTEGER Incandescent_Built_in;
        static SIGNED_LONG_INTEGER LED_off_Built_in;
        static SIGNED_LONG_INTEGER LED_on_B_Built_in;
        static SIGNED_LONG_INTEGER LED_on_G_Built_in;
        static SIGNED_LONG_INTEGER LED_on_R_Built_in;
        static SIGNED_LONG_INTEGER LED_on_W_Built_in;
        static SIGNED_LONG_INTEGER LED_on_Y_Built_in;
        static SIGNED_LONG_INTEGER Lower_Built_in;
        static SIGNED_LONG_INTEGER Mood_Built_in;
        static SIGNED_LONG_INTEGER Morning_Built_in;
        static SIGNED_LONG_INTEGER Panic_Built_in;
        static SIGNED_LONG_INTEGER Party_Built_in;
        static SIGNED_LONG_INTEGER Raise_Built_in;
        static SIGNED_LONG_INTEGER Switch_Built_in;
        static SIGNED_LONG_INTEGER ToBed_Built_in;
        static SIGNED_LONG_INTEGER WelcomeHome_Built_in;
        static SIGNED_LONG_INTEGER Amenities_Built_in;
        static SIGNED_LONG_INTEGER Climate_Built_in;
        static SIGNED_LONG_INTEGER Drapes_Built_in;
        static SIGNED_LONG_INTEGER Favorites_Built_in;
        static SIGNED_LONG_INTEGER Garage_Built_in;
        static SIGNED_LONG_INTEGER Lights_Built_in;
        static SIGNED_LONG_INTEGER Lights_ON_Built_in;
        static SIGNED_LONG_INTEGER Macros_Built_in;
        static SIGNED_LONG_INTEGER Media_Built_in;
        static SIGNED_LONG_INTEGER Pool_Built_in;
        static SIGNED_LONG_INTEGER Scheduler_Built_in;
        static SIGNED_LONG_INTEGER Security_Built_in;
        static SIGNED_LONG_INTEGER WEATHER_Built_in;
        static SIGNED_LONG_INTEGER About_Built_in;
        static SIGNED_LONG_INTEGER AcquireGateway_Built_in;
        static SIGNED_LONG_INTEGER Acquired_Connected_Built_in;
        static SIGNED_LONG_INTEGER BatteryCriticallyLow_Built_in;
        static SIGNED_LONG_INTEGER BatteryLow_Built_in;
        static SIGNED_LONG_INTEGER BatteryOkay_Built_in;
        static SIGNED_LONG_INTEGER NoRFConnection_Built_in;
        static SIGNED_LONG_INTEGER NotAcquired_NotConnected_Built_in;
        static SIGNED_LONG_INTEGER PowerSymbol_Built_in;
        static SIGNED_LONG_INTEGER RF_Built_in;
        static SIGNED_LONG_INTEGER Settings_Built_in;
        static SIGNED_LONG_INTEGER SystemMessagesinfoicon_Built_in;
        static SIGNED_LONG_INTEGER AMFM_Built_in;
        static SIGNED_LONG_INTEGER AMFM_a_Built_in;
        static SIGNED_LONG_INTEGER AppleTV_Built_in;
        static SIGNED_LONG_INTEGER AppleTV_a_Built_in;
        static SIGNED_LONG_INTEGER AudioDisc_Built_in;
        static SIGNED_LONG_INTEGER AudioDisc_a_Built_in;
        static SIGNED_LONG_INTEGER Auxiliarygenericlookingsource_Built_in;
        static SIGNED_LONG_INTEGER Auxiliarygenericlookingsource_a_Built_in;
        static SIGNED_LONG_INTEGER Blu_ray_Built_in;
        static SIGNED_LONG_INTEGER Blu_ray_a_Built_in;
        static SIGNED_LONG_INTEGER cable_DVR_Built_in;
        static SIGNED_LONG_INTEGER cable_DVR_a_Built_in;
        static SIGNED_LONG_INTEGER Camera_Built_in;
        static SIGNED_LONG_INTEGER Camera_a_Built_in;
        static SIGNED_LONG_INTEGER Computer_Built_in;
        static SIGNED_LONG_INTEGER Computer_a_Built_in;
        static SIGNED_LONG_INTEGER DirecTV_Built_in;
        static SIGNED_LONG_INTEGER DirecTV_a_Built_in;
        static SIGNED_LONG_INTEGER DishNetwork_Built_in;
        static SIGNED_LONG_INTEGER DishNetwork_a_Built_in;
        static SIGNED_LONG_INTEGER DVD_Built_in;
        static SIGNED_LONG_INTEGER DVD_a_Built_in;
        static SIGNED_LONG_INTEGER GameConsole_Built_in;
        static SIGNED_LONG_INTEGER GameConsole_a_Built_in;
        static SIGNED_LONG_INTEGER InternetRadio_Built_in;
        static SIGNED_LONG_INTEGER InternetRadio_a_Built_in;
        static SIGNED_LONG_INTEGER Interwave_Built_in;
        static SIGNED_LONG_INTEGER Interwave_a_Built_in;
        static SIGNED_LONG_INTEGER iPod_Built_in;
        static SIGNED_LONG_INTEGER iPod_a_Built_in;
        static SIGNED_LONG_INTEGER MediaDisc_Built_in;
        static SIGNED_LONG_INTEGER MediaDisc_a_Built_in;
        static SIGNED_LONG_INTEGER MediaPlayerADMS_Built_in;
        static SIGNED_LONG_INTEGER MediaPlayerADMS_a_Built_in;
        static SIGNED_LONG_INTEGER PS3_Built_in;
        static SIGNED_LONG_INTEGER PS3_a_Built_in;
        static SIGNED_LONG_INTEGER recordplayers_Built_in;
        static SIGNED_LONG_INTEGER recordplayers_a_Built_in;
        static SIGNED_LONG_INTEGER Satellite_Built_in;
        static SIGNED_LONG_INTEGER Satellite_a_Built_in;
        static SIGNED_LONG_INTEGER TiVo_Built_in;
        static SIGNED_LONG_INTEGER TiVo_a_Built_in;
        static SIGNED_LONG_INTEGER TV_Built_in;
        static SIGNED_LONG_INTEGER TV_a_Built_in;
        static SIGNED_LONG_INTEGER VCR_Built_in;
        static SIGNED_LONG_INTEGER VCR_a_Built_in;
        static SIGNED_LONG_INTEGER VUDU_Built_in;
        static SIGNED_LONG_INTEGER VUDU_a_Built_in;
        static SIGNED_LONG_INTEGER Web_Built_in;
        static SIGNED_LONG_INTEGER Web_a_Built_in;
        static SIGNED_LONG_INTEGER Wii_Built_in;
        static SIGNED_LONG_INTEGER Wii_a_Built_in;
        static SIGNED_LONG_INTEGER XBOX_Built_in;
        static SIGNED_LONG_INTEGER XBOX_a_Built_in;
        static SIGNED_LONG_INTEGER XM_Built_in;
        static SIGNED_LONG_INTEGER XM_a_Built_in;
        static SIGNED_LONG_INTEGER AENetwork_Built_in;
        static SIGNED_LONG_INTEGER ABCFamily_Built_in;
        static SIGNED_LONG_INTEGER ABC_Built_in;
        static SIGNED_LONG_INTEGER Altitude_Built_in;
        static SIGNED_LONG_INTEGER AMC_Built_in;
        static SIGNED_LONG_INTEGER AmericasAuctionNetwork_Built_in;
        static SIGNED_LONG_INTEGER AnimalPlanet_Built_in;
        static SIGNED_LONG_INTEGER BabyFirstTV_Built_in;
        static SIGNED_LONG_INTEGER BBCAmerica_Built_in;
        static SIGNED_LONG_INTEGER BET_Built_in;
        static SIGNED_LONG_INTEGER BigTenNetwork_Built_in;
        static SIGNED_LONG_INTEGER BloombergTelevision_Built_in;
        static SIGNED_LONG_INTEGER Boomerang_Built_in;
        static SIGNED_LONG_INTEGER Bravo_Built_in;
        static SIGNED_LONG_INTEGER BYUTelevision_Built_in;
        static SIGNED_LONG_INTEGER CartoonNetwork_Built_in;
        static SIGNED_LONG_INTEGER CBSCollegeSportsNetwork_Built_in;
        static SIGNED_LONG_INTEGER CBS_Built_in;
        static SIGNED_LONG_INTEGER Centric_Built_in;
        static SIGNED_LONG_INTEGER Chiller_Built_in;
        static SIGNED_LONG_INTEGER ChristianTelevisionNetwork_Built_in;
        static SIGNED_LONG_INTEGER Cinemax_Built_in;
        static SIGNED_LONG_INTEGER ClubErotix_Built_in;
        static SIGNED_LONG_INTEGER CMT_Built_in;
        static SIGNED_LONG_INTEGER CNBCWORLD_Built_in;
        static SIGNED_LONG_INTEGER CNBC_Built_in;
        static SIGNED_LONG_INTEGER CNN_Built_in;
        static SIGNED_LONG_INTEGER ComcastSportsNet_Built_in;
        static SIGNED_LONG_INTEGER ComedyCentral_Built_in;
        static SIGNED_LONG_INTEGER CookingChannel_Built_in;
        static SIGNED_LONG_INTEGER CrimeInvestigationNetwork_Built_in;
        static SIGNED_LONG_INTEGER CSPAN_Built_in;
        static SIGNED_LONG_INTEGER CSPAN2_Built_in;
        static SIGNED_LONG_INTEGER CurrentTV_Built_in;
        static SIGNED_LONG_INTEGER DaystarTelevisionNetwork_Built_in;
        static SIGNED_LONG_INTEGER DiscoveryChannel_Built_in;
        static SIGNED_LONG_INTEGER DisneyChannel_Built_in;
        static SIGNED_LONG_INTEGER DisneyXD_Built_in;
        static SIGNED_LONG_INTEGER DIYNetwork_Built_in;
        static SIGNED_LONG_INTEGER E_Built_in;
        static SIGNED_LONG_INTEGER Encore_Built_in;
        static SIGNED_LONG_INTEGER ESPNClassic_Built_in;
        static SIGNED_LONG_INTEGER ESPNFullCourt_Built_in;
        static SIGNED_LONG_INTEGER ESPNGamePlan_Built_in;
        static SIGNED_LONG_INTEGER ESPN_Built_in;
        static SIGNED_LONG_INTEGER ESPNews_Built_in;
        static SIGNED_LONG_INTEGER ESPNU_Built_in;
        static SIGNED_LONG_INTEGER FitTV_Built_in;
        static SIGNED_LONG_INTEGER Flix_Built_in;
        static SIGNED_LONG_INTEGER FoodNetwork_Built_in;
        static SIGNED_LONG_INTEGER FoxBusinessNetwork_Built_in;
        static SIGNED_LONG_INTEGER FoxCollegeSports_Built_in;
        static SIGNED_LONG_INTEGER FoxMovieChannel_Built_in;
        static SIGNED_LONG_INTEGER FoxNewsChannel_Built_in;
        static SIGNED_LONG_INTEGER FoxSoccerChannel_Built_in;
        static SIGNED_LONG_INTEGER Fox_Built_in;
        static SIGNED_LONG_INTEGER FreeSpeechTV_Built_in;
        static SIGNED_LONG_INTEGER Fresh_Built_in;
        static SIGNED_LONG_INTEGER FSN_Built_in;
        static SIGNED_LONG_INTEGER FuelTV_Built_in;
        static SIGNED_LONG_INTEGER FuseTV_Built_in;
        static SIGNED_LONG_INTEGER FX_Built_in;
        static SIGNED_LONG_INTEGER GAC_Built_in;
        static SIGNED_LONG_INTEGER GemShoppingNetwork_Built_in;
        static SIGNED_LONG_INTEGER GODTV_Built_in;
        static SIGNED_LONG_INTEGER GOLTV_Built_in;
        static SIGNED_LONG_INTEGER GoldenEagleBroadcasting_Built_in;
        static SIGNED_LONG_INTEGER GolfChannel_Built_in;
        static SIGNED_LONG_INTEGER GospelMusicChannel_Built_in;
        static SIGNED_LONG_INTEGER GrandslamTennisTournaments_Built_in;
        static SIGNED_LONG_INTEGER GSN_Built_in;
        static SIGNED_LONG_INTEGER HallmarkChannel_Built_in;
        static SIGNED_LONG_INTEGER HallmarkMovieChannel_Built_in;
        static SIGNED_LONG_INTEGER HBOFamily_Built_in;
        static SIGNED_LONG_INTEGER HBOSignature_Built_in;
        static SIGNED_LONG_INTEGER HBO_Built_in;
        static SIGNED_LONG_INTEGER HBO2_Built_in;
        static SIGNED_LONG_INTEGER HDTheater_Built_in;
        static SIGNED_LONG_INTEGER HDNetMovies_Built_in;
        static SIGNED_LONG_INTEGER HDNet_Built_in;
        static SIGNED_LONG_INTEGER HGTV_Built_in;
        static SIGNED_LONG_INTEGER HistoryInternational_Built_in;
        static SIGNED_LONG_INTEGER History_Built_in;
        static SIGNED_LONG_INTEGER HLN_Built_in;
        static SIGNED_LONG_INTEGER HopeChannel_Built_in;
        static SIGNED_LONG_INTEGER HSN_Built_in;
        static SIGNED_LONG_INTEGER HustlerTV_Built_in;
        static SIGNED_LONG_INTEGER IFC_Built_in;
        static SIGNED_LONG_INTEGER InvestigationDiscovery_Built_in;
        static SIGNED_LONG_INTEGER Ion_Built_in;
        static SIGNED_LONG_INTEGER JewelryTV_Built_in;
        static SIGNED_LONG_INTEGER JewishLifeTelvision_Built_in;
        static SIGNED_LONG_INTEGER JuicyNetwork_Built_in;
        static SIGNED_LONG_INTEGER LifetimeMovieNetwork_Built_in;
        static SIGNED_LONG_INTEGER Lifetime_Built_in;
        static SIGNED_LONG_INTEGER LinkTV_Built_in;
        static SIGNED_LONG_INTEGER Logo_Built_in;
        static SIGNED_LONG_INTEGER MASN2_Built_in;
        static SIGNED_LONG_INTEGER MASN_Built_in;
        static SIGNED_LONG_INTEGER MensMajorsGolfChampionships_Built_in;
        static SIGNED_LONG_INTEGER MGMHD_Built_in;
        static SIGNED_LONG_INTEGER MilitaryChannel_Built_in;
        static SIGNED_LONG_INTEGER MLBExtraInnings_Built_in;
        static SIGNED_LONG_INTEGER MLBNetwork_Built_in;
        static SIGNED_LONG_INTEGER MoreMax_Built_in;
        static SIGNED_LONG_INTEGER MountainWestSportsNetwork_Built_in;
        static SIGNED_LONG_INTEGER MSG2_Built_in;
        static SIGNED_LONG_INTEGER MSGPlus_Built_in;
        static SIGNED_LONG_INTEGER MSG_Built_in;
        static SIGNED_LONG_INTEGER MSNBC_Built_in;
        static SIGNED_LONG_INTEGER MTV_Built_in;
        static SIGNED_LONG_INTEGER MTV2_Built_in;
        static SIGNED_LONG_INTEGER N3D_Built_in;
        static SIGNED_LONG_INTEGER NASATV_Built_in;
        static SIGNED_LONG_INTEGER NascarHotPass_Built_in;
        static SIGNED_LONG_INTEGER NationalGeographicChannel_Built_in;
        static SIGNED_LONG_INTEGER NationalGeographicWild_Built_in;
        static SIGNED_LONG_INTEGER NationalReligiousBroadcasters_Built_in;
        static SIGNED_LONG_INTEGER NBALeagePass_Built_in;
        static SIGNED_LONG_INTEGER NBATV_Built_in;
        static SIGNED_LONG_INTEGER NBC_Built_in;
        static SIGNED_LONG_INTEGER NCAA_Built_in;
        static SIGNED_LONG_INTEGER NESN_Built_in;
        static SIGNED_LONG_INTEGER NFLNetwork_Built_in;
        static SIGNED_LONG_INTEGER NFLSundayticket_Built_in;
        static SIGNED_LONG_INTEGER NHLCenterIce_Built_in;
        static SIGNED_LONG_INTEGER NHLNetwork_Built_in;
        static SIGNED_LONG_INTEGER NickJr_Built_in;
        static SIGNED_LONG_INTEGER Nickelodeon_Built_in;
        static SIGNED_LONG_INTEGER Nicktoons_Built_in;
        static SIGNED_LONG_INTEGER OutdoorChannel_Built_in;
        static SIGNED_LONG_INTEGER Ovation_Built_in;
        static SIGNED_LONG_INTEGER OWN_Built_in;
        static SIGNED_LONG_INTEGER Oxygen_Built_in;
        static SIGNED_LONG_INTEGER Palladia_Built_in;
        static SIGNED_LONG_INTEGER PBSKidsSprout_Built_in;
        static SIGNED_LONG_INTEGER PBS_Built_in;
        static SIGNED_LONG_INTEGER PlanetGreen_Built_in;
        static SIGNED_LONG_INTEGER PlayboyTV_Built_in;
        static SIGNED_LONG_INTEGER PoshTV_Built_in;
        static SIGNED_LONG_INTEGER PursuitChannel_Built_in;
        static SIGNED_LONG_INTEGER QVC_Built_in;
        static SIGNED_LONG_INTEGER REAL_Built_in;
        static SIGNED_LONG_INTEGER ReelzChannel_Built_in;
        static SIGNED_LONG_INTEGER RFD_TV_Built_in;
        static SIGNED_LONG_INTEGER RKTV_Built_in;
        static SIGNED_LONG_INTEGER ScienceChannel_Built_in;
        static SIGNED_LONG_INTEGER ShopNBC_Built_in;
        static SIGNED_LONG_INTEGER Showtime_Built_in;
        static SIGNED_LONG_INTEGER Sleuth_Built_in;
        static SIGNED_LONG_INTEGER SmithsonianChannelHD_Built_in;
        static SIGNED_LONG_INTEGER SNY_Built_in;
        static SIGNED_LONG_INTEGER SOAPnet_Built_in;
        static SIGNED_LONG_INTEGER SonLifeBroadcasingNetwork_Built_in;
        static SIGNED_LONG_INTEGER SonyMovieChannel_Built_in;
        static SIGNED_LONG_INTEGER Speed_Built_in;
        static SIGNED_LONG_INTEGER Spice_Xcess_Built_in;
        static SIGNED_LONG_INTEGER Spike_Built_in;
        static SIGNED_LONG_INTEGER SportsmanChannel_Built_in;
        static SIGNED_LONG_INTEGER SportSouth_Built_in;
        static SIGNED_LONG_INTEGER StarzKidsandFamily_Built_in;
        static SIGNED_LONG_INTEGER Starz_Built_in;
        static SIGNED_LONG_INTEGER blank_Built_in;
        static SIGNED_LONG_INTEGER StyleNetwork_Built_in;
        static SIGNED_LONG_INTEGER SunSports_Built_in;
        static SIGNED_LONG_INTEGER SundanceChannel_Built_in;
        static SIGNED_LONG_INTEGER Syfy_Built_in;
        static SIGNED_LONG_INTEGER TBS_Built_in;
        static SIGNED_LONG_INTEGER TCM_Built_in;
        static SIGNED_LONG_INTEGER TeenNick_Built_in;
        static SIGNED_LONG_INTEGER TennisChannel_Built_in;
        static SIGNED_LONG_INTEGER TheBiographyChannel_Built_in;
        static SIGNED_LONG_INTEGER TheChurchChannel_Built_in;
        static SIGNED_LONG_INTEGER TheCW_Built_in;
        static SIGNED_LONG_INTEGER TheDocumentaryChannel_Built_in;
        static SIGNED_LONG_INTEGER TheHub_Built_in;
        static SIGNED_LONG_INTEGER TheInspirationNetwork_Built_in;
        static SIGNED_LONG_INTEGER TheMovieChannel_Built_in;
        static SIGNED_LONG_INTEGER TheWeatherChannel_Built_in;
        static SIGNED_LONG_INTEGER TheWordNetwork_Built_in;
        static SIGNED_LONG_INTEGER TLC_Built_in;
        static SIGNED_LONG_INTEGER TNT_Built_in;
        static SIGNED_LONG_INTEGER TravelChannel_Built_in;
        static SIGNED_LONG_INTEGER Tri_StateChristianTelevision_Built_in;
        static SIGNED_LONG_INTEGER TrinityBroadcastingNetwork_Built_in;
        static SIGNED_LONG_INTEGER TruTV_Built_in;
        static SIGNED_LONG_INTEGER TVGuideNetwork_Built_in;
        static SIGNED_LONG_INTEGER TVLand_Built_in;
        static SIGNED_LONG_INTEGER TVOne_Built_in;
        static SIGNED_LONG_INTEGER TVG_Built_in;
        static SIGNED_LONG_INTEGER UniversalHD_Built_in;
        static SIGNED_LONG_INTEGER UpliftTV_Built_in;
        static SIGNED_LONG_INTEGER USANetwork_Built_in;
        static SIGNED_LONG_INTEGER Versus_Built_in;
        static SIGNED_LONG_INTEGER VH1Classic_Built_in;
        static SIGNED_LONG_INTEGER VH1_Built_in;
        static SIGNED_LONG_INTEGER WEtv_Built_in;
        static SIGNED_LONG_INTEGER WGNAmerica_Built_in;
        static SIGNED_LONG_INTEGER WorldHarvestTelevision_Built_in;
        static SIGNED_LONG_INTEGER YESNetwork_Built_in;
        static SIGNED_LONG_INTEGER wx_000_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_001_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_002_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_003_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_004_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_006_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_010_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_011_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_012_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_013_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_014_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_015_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_020_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_022_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_023_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_032_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_033_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_034_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_036_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_045_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_049_24x24_Built_in;
        static SIGNED_LONG_INTEGER wx_052_24x24_Built_in;
    };

namespace Crestron.Rio.DataStructures.Media.Routing;
        // class declarations
         class DeviceRouteEventArgs;
         class DynamicRouting;
         class AutoMediaRoutingController;
     class DeviceRouteEventArgs 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER inputNumber;
        SIGNED_LONG_INTEGER outputSignalID;

        // class properties
        SIGNED_LONG_INTEGER midpointID;
    };

    static class DynamicRouting 
    {
        // class delegates

        // class events
        static EventHandler DeviceRouteEvent ( DeviceRouteEventArgs data );

        // class functions
        static FUNCTION Initialize ( STRING fileName , STRING systemUUID );
        static FUNCTION UpdateFeedback ( SIGNED_LONG_INTEGER midpointID , SIGNED_LONG_INTEGER outputSignalID , SIGNED_LONG_INTEGER inputSelected );
        static SIGNED_LONG_INTEGER_FUNCTION GetInputMidpointIdForMidpoint ( SIGNED_LONG_INTEGER midpointId , SIGNED_LONG_INTEGER inputNumber );
        static SIGNED_LONG_INTEGER_FUNCTION GetOutputSignalTypeForMidpoint ( SIGNED_LONG_INTEGER midpointId , SIGNED_LONG_INTEGER outputDeviceID );
        static SIGNED_LONG_INTEGER_FUNCTION GetOutputMidpointIdForMidpoint ( SIGNED_LONG_INTEGER midpointId , SIGNED_LONG_INTEGER outputNumber );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AutoMediaRoutingController 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION PerformRegisteredRouting ( MediaSource source );
        FUNCTION PerformRegisteredUnrouting ( MediaSource source );
        FUNCTION AddSourceToEndpointStack ( MediaSource source , Endpoint endpoint );
        FUNCTION ClearAutoRoutingStacks ();
        FUNCTION ClearAutoRoutingStack ( Endpoint endpoint );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.Rio.DataStructures.Media.DeviceManagement;
        // class declarations
         class MediaMidpointSSharpComponent;
     class MediaMidpointSSharpComponent 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION MidpointReady ();
        FUNCTION SetID ( SIGNED_LONG_INTEGER inputID );
        FUNCTION InputNumberSyncDetectHigh ( SIGNED_LONG_INTEGER inputNumber );
        FUNCTION InputNumberSyncDetectLow ( SIGNED_LONG_INTEGER inputNumber );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.MediaSubsystem.Common;
        // class declarations

