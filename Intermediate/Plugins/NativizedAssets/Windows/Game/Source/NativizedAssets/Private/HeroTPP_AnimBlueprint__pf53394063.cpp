#include "NativizedAssets.h"
#include "HeroTPP_AnimBlueprint__pf53394063.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace1D.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UHeroTPP_AnimBlueprint_C__pf53394063::UHeroTPP_AnimBlueprint_C__pf53394063(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass() == GetClass()))
	{
		UHeroTPP_AnimBlueprint_C__pf53394063::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	__InitAllAnimNodes();
	bpv__IsInAirx__pfzy = false;
	bpv__Speed__pf = 0.000000f;
}
PRAGMA_ENABLE_OPTIMIZATION
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAllAnimNodes()
{
	__InitAnimNode__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8();
	__InitAnimNode__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691();
	__InitAnimNode__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6();
	__InitAnimNode__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8();
	__InitAnimNode__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23();
	__InitAnimNode__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7();
	__InitAnimNode__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8();
	__InitAnimNode__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D();
	__InitAnimNode__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095();
	__InitAnimNode__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8();
	__InitAnimNode__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF();
	__InitAnimNode__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582();
	__InitAnimNode__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051();
	__InitAnimNode__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B();
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8()
{
	bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf.Result.LinkID = 13;
	bpv__AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8__pf.Name = FName(TEXT("AnimGraph"));
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691()
{
	bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[4]);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6()
{
	bpv__AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[3]);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8()
{
	bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[2]);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23()
{
	bpv__AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[1]);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7()
{
	bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7__pf.bLoopAnimation = false;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8()
{
	bpv__AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8__pf.Result.LinkID = 5;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D()
{
	bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D__pf.PlayRate = 0.750000f;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095()
{
	bpv__AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095__pf.Result.LinkID = 7;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8()
{
	bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8__pf.bLoopAnimation = false;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF()
{
	bpv__AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF__pf.Result.LinkID = 9;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582()
{
	bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[0]);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051()
{
	bpv__AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051__pf.Result.LinkID = 11;
}
void UHeroTPP_AnimBlueprint_C__pf53394063::__InitAnimNode__AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B()
{
}
void UHeroTPP_AnimBlueprint_C__pf53394063::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UHeroTPP_AnimBlueprint_C__pf53394063::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__0->BakedStateMachines = TArray<FBakedAnimationStateMachine> ();
	__Local__0->BakedStateMachines.AddUninitialized(1);
	FBakedAnimationStateMachine::StaticStruct()->InitializeStruct(__Local__0->BakedStateMachines.GetData(), 1);
	auto& __Local__1 = __Local__0->BakedStateMachines[0];
	__Local__1.MachineName = FName(TEXT("Default"));
	__Local__1.InitialState = 0;
	__Local__1.States = TArray<FBakedAnimationState> ();
	__Local__1.States.AddUninitialized(4);
	FBakedAnimationState::StaticStruct()->InitializeStruct(__Local__1.States.GetData(), 4);
	auto& __Local__2 = __Local__1.States[0];
	__Local__2.StateName = FName(TEXT("Idle/Run"));
	__Local__2.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__2.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__2.Transitions.GetData(), 1);
	auto& __Local__3 = __Local__2.Transitions[0];
	__Local__3.CanTakeDelegateIndex = 9;
	__Local__3.TransitionIndex = 0;
	__Local__2.StateRootNodeIndex = 1;
	__Local__2.PlayerNodeIndices = TArray<int32> ();
	__Local__2.PlayerNodeIndices.Reserve(1);
	__Local__2.PlayerNodeIndices.Add(2);
	auto& __Local__4 = __Local__1.States[1];
	__Local__4.StateName = FName(TEXT("JumpStart"));
	__Local__4.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__4.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__4.Transitions.GetData(), 1);
	auto& __Local__5 = __Local__4.Transitions[0];
	__Local__5.CanTakeDelegateIndex = 10;
	__Local__5.TransitionIndex = 1;
	__Local__4.StateRootNodeIndex = 3;
	__Local__4.PlayerNodeIndices = TArray<int32> ();
	__Local__4.PlayerNodeIndices.Reserve(1);
	__Local__4.PlayerNodeIndices.Add(4);
	auto& __Local__6 = __Local__1.States[2];
	__Local__6.StateName = FName(TEXT("JumpLoop"));
	__Local__6.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__6.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__6.Transitions.GetData(), 1);
	auto& __Local__7 = __Local__6.Transitions[0];
	__Local__7.CanTakeDelegateIndex = 11;
	__Local__7.TransitionIndex = 2;
	__Local__6.StateRootNodeIndex = 5;
	__Local__6.PlayerNodeIndices = TArray<int32> ();
	__Local__6.PlayerNodeIndices.Reserve(1);
	__Local__6.PlayerNodeIndices.Add(6);
	auto& __Local__8 = __Local__1.States[3];
	__Local__8.StateName = FName(TEXT("JumpEnd"));
	__Local__8.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__8.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__8.Transitions.GetData(), 1);
	auto& __Local__9 = __Local__8.Transitions[0];
	__Local__9.CanTakeDelegateIndex = 12;
	__Local__9.TransitionIndex = 3;
	__Local__8.StateRootNodeIndex = 7;
	__Local__8.PlayerNodeIndices = TArray<int32> ();
	__Local__8.PlayerNodeIndices.Reserve(1);
	__Local__8.PlayerNodeIndices.Add(8);
	__Local__1.Transitions = TArray<FAnimationTransitionBetweenStates> ();
	__Local__1.Transitions.AddUninitialized(4);
	FAnimationTransitionBetweenStates::StaticStruct()->InitializeStruct(__Local__1.Transitions.GetData(), 4);
	auto& __Local__10 = __Local__1.Transitions[0];
	__Local__10.PreviousState = 0;
	__Local__10.NextState = 1;
	__Local__10.CrossfadeDuration = 0.050000f;
	__Local__10.BlendMode = EAlphaBlendOption::Linear;
	auto& __Local__11 = __Local__1.Transitions[1];
	__Local__11.PreviousState = 1;
	__Local__11.NextState = 2;
	__Local__11.CrossfadeDuration = 0.200000f;
	__Local__11.BlendMode = EAlphaBlendOption::Linear;
	auto& __Local__12 = __Local__1.Transitions[2];
	__Local__12.PreviousState = 2;
	__Local__12.NextState = 3;
	__Local__12.BlendMode = EAlphaBlendOption::Linear;
	auto& __Local__13 = __Local__1.Transitions[3];
	__Local__13.PreviousState = 3;
	__Local__13.NextState = 0;
	__Local__13.CrossfadeDuration = 0.100000f;
	__Local__13.BlendMode = EAlphaBlendOption::Linear;
	__Local__0->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UHeroTPP_AnimBlueprint_C__pf53394063::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__0->OrderedSavedPoseIndicesMap = {};
	__Local__0->OrderedSavedPoseIndicesMap.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__16{};
	const UProperty* __Local__15 = __Local__16.Get();
	if (nullptr == __Local__15)
	{
		__Local__15 = (UAnimClassData::StaticClass())->FindPropertyByName(FName(TEXT("OrderedSavedPoseIndicesMap")));
		check(__Local__15);
		__Local__16 = __Local__15;
	}
	FScriptMapHelper __Local__14(CastChecked<UMapProperty>(__Local__15), &__Local__0->OrderedSavedPoseIndicesMap);
	TMap<FName,FCachedPoseIndices>::ElementType& __Local__17 = *(TMap<FName,FCachedPoseIndices>::ElementType*)__Local__14.GetPairPtr(__Local__14.AddDefaultValue_Invalid_NeedsRehash());
	__Local__17.Key = FName(TEXT("AnimGraph"));
	__Local__14.Rehash();
	__Local__0->AnimBlueprintFunctions = TArray<FAnimBlueprintFunction> ();
	__Local__0->AnimBlueprintFunctions.AddUninitialized(1);
	FAnimBlueprintFunction::StaticStruct()->InitializeStruct(__Local__0->AnimBlueprintFunctions.GetData(), 1);
	auto& __Local__18 = __Local__0->AnimBlueprintFunctions[0];
	__Local__18.Name = FName(TEXT("AnimGraph"));
	__Local__18.OutputPoseNodeIndex = 0;
	__Local__18.OutputPoseNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8"));
	__Local__18.bImplemented = true;
	__Local__0->AnimNodeProperties = TArray<UStructProperty*> ();
	__Local__0->AnimNodeProperties.Reserve(14);
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_CEDB9C0441584D06409BBE831A729CF8")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_193B50AE4231658A9EE2C5864BCF5FC7")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_5ECDD11148538CEC852728BCBF0E5FD8")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_3BD3B990412244CFC1892D84A4342C2D")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_AFF8E8664835BE31E02E81846FEE4095")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_3EB448E5491D469DA5DC43966E0481A8")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_96FB424842BCC0648F2C2DB0CAFEB3DF")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_BE086D9A4FAFC223785E5BBA53595051")));
	__Local__0->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateMachine_63E01ED04FD7E6EEF5104CAD884F7B8B")));
	__Local__0->EvaluateGraphExposedInputs = TArray<FExposedValueHandler> ();
	__Local__0->EvaluateGraphExposedInputs.AddUninitialized(5);
	FExposedValueHandler::StaticStruct()->InitializeStruct(__Local__0->EvaluateGraphExposedInputs.GetData(), 5);
	auto& __Local__19 = __Local__0->EvaluateGraphExposedInputs[0];
	__Local__19.CopyRecords = TArray<FExposedValueCopyRecord> ();
	__Local__19.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(__Local__19.CopyRecords.GetData(), 1);
	auto& __Local__20 = __Local__19.CopyRecords[0];
	__Local__20.SourcePropertyName = FName(TEXT("Speed"));
	__Local__20.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__20.Size = 4;
	__Local__20.CachedSourceProperty = FindFieldChecked<UFloatProperty>(InDynamicClass, TEXT("Speed"));
	__Local__19.ValueHandlerNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_B5D801B7406E99CB8C39F59CDA8B4582"));
	auto& __Local__21 = __Local__0->EvaluateGraphExposedInputs[1];
	__Local__21.CopyRecords = TArray<FExposedValueCopyRecord> ();
	__Local__21.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(__Local__21.CopyRecords.GetData(), 1);
	auto& __Local__22 = __Local__21.CopyRecords[0];
	__Local__22.SourcePropertyName = FName(TEXT("IsInAir?"));
	__Local__22.CopyType = ECopyType::BoolProperty;
	__Local__22.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__22.Size = 1;
	__Local__22.CachedSourceProperty = FindFieldChecked<UBoolProperty>(InDynamicClass, TEXT("IsInAir?"));
	__Local__21.ValueHandlerNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_04136FF0414AC997E300FFB31384DE23"));
	auto& __Local__23 = __Local__0->EvaluateGraphExposedInputs[2];
	__Local__23.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8"));
	__Local__23.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8"));
	__Local__23.ValueHandlerNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8"));
	auto& __Local__24 = __Local__0->EvaluateGraphExposedInputs[3];
	__Local__24.CopyRecords = TArray<FExposedValueCopyRecord> ();
	__Local__24.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(__Local__24.CopyRecords.GetData(), 1);
	auto& __Local__25 = __Local__24.CopyRecords[0];
	__Local__25.SourcePropertyName = FName(TEXT("IsInAir?"));
	__Local__25.PostCopyOperation = EPostCopyOperation::LogicalNegateBool;
	__Local__25.CopyType = ECopyType::BoolProperty;
	__Local__25.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__25.Size = 1;
	__Local__25.CachedSourceProperty = FindFieldChecked<UBoolProperty>(InDynamicClass, TEXT("IsInAir?"));
	__Local__24.ValueHandlerNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_D8F850D74536408EF1ED218F7A11A4A6"));
	auto& __Local__26 = __Local__0->EvaluateGraphExposedInputs[4];
	__Local__26.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691"));
	__Local__26.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691"));
	__Local__26.ValueHandlerNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691"));
	InDynamicClass->AnimClassImplementation = __Local__0;
}
PRAGMA_ENABLE_OPTIMIZATION
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__ExecuteUbergraph_HeroTPP_AnimBlueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	UPawnMovementComponent* bpfv__CallFunc_GetMovementComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_IsFalling_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
	bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
	if(::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
	{
		bpfv__CallFunc_GetMovementComponent_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf->GetMovementComponent();
	}
	if(::IsValid(bpfv__CallFunc_GetMovementComponent_ReturnValue__pf))
	{
		bpfv__CallFunc_IsFalling_ReturnValue__pf = bpfv__CallFunc_GetMovementComponent_ReturnValue__pf->IsFalling();
	}
	bpv__IsInAirx__pfzy = bpfv__CallFunc_IsFalling_ReturnValue__pf;
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
	if(::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
	{
		bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf->GetVelocity();
	}
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
	bpv__Speed__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__ExecuteUbergraph_HeroTPP_AnimBlueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(8);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf;
	return; // KCST_GotoReturn
}
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__ExecuteUbergraph_HeroTPP_AnimBlueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(4);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_HeroTPP_AnimBlueprint__pf_0(4);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_75D194924A456743BDBF2094452B33A8__pf()
{
	bpf__ExecuteUbergraph_HeroTPP_AnimBlueprint__pf_2(3);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_DA6D715442C39D7B704C7D8392025691__pf()
{
	bpf__ExecuteUbergraph_HeroTPP_AnimBlueprint__pf_1(8);
}
void UHeroTPP_AnimBlueprint_C__pf53394063::bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf)
{
	auto __Local__27 = FPoseLink{};
	bpp__AnimGraph__pf = __Local__27;
}
PRAGMA_DISABLE_OPTIMIZATION
void UHeroTPP_AnimBlueprint_C__pf53394063::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Player_Assets/Animations/Jump_End.Jump_End 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Player_Assets/Animations/Jump_Loop.Jump_Loop 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Player_Assets/Animations/Jump_Start.Jump_Start 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Player_Assets/Character/IdleRun_TPP.IdleRun_TPP 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Player_Assets/Character/HeroTPP_Skeleton.HeroTPP_Skeleton 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UHeroTPP_AnimBlueprint_C__pf53394063::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{19, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{21, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UHeroTPP_AnimBlueprint_C__pf53394063
{
	FRegisterHelper__UHeroTPP_AnimBlueprint_C__pf53394063()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Player_Assets/Character/HeroTPP_AnimBlueprint"), &UHeroTPP_AnimBlueprint_C__pf53394063::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UHeroTPP_AnimBlueprint_C__pf53394063 Instance;
};
FRegisterHelper__UHeroTPP_AnimBlueprint_C__pf53394063 FRegisterHelper__UHeroTPP_AnimBlueprint_C__pf53394063::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif