Starting a Gradle Daemon, 1 incompatible Daemon could not be reused, use --status for details
> Task :launcher:preBuild UP-TO-DATE
> Task :unityLibrary:mobilenotifications.androidlib:preBuild UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:preBuild UP-TO-DATE
> Task :unityLibrary:preBuild UP-TO-DATE
> Task :unityLibrary:mobilenotifications.androidlib:preReleaseBuild UP-TO-DATE
> Task :launcher:preReleaseBuild UP-TO-DATE
> Task :unityLibrary:preReleaseBuild UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:preReleaseBuild UP-TO-DATE
> Task :unityLibrary:mobilenotifications.androidlib:compileReleaseAidl NO-SOURCE
> Task :unityLibrary:FirebaseApp.androidlib:compileReleaseAidl NO-SOURCE
> Task :unityLibrary:FirebaseApp.androidlib:packageReleaseRenderscript NO-SOURCE
> Task :unityLibrary:mobilenotifications.androidlib:packageReleaseRenderscript NO-SOURCE
> Task :unityLibrary:FirebaseApp.androidlib:compileReleaseRenderscript NO-SOURCE
> Task :unityLibrary:mobilenotifications.androidlib:compileReleaseRenderscript NO-SOURCE
> Task :unityLibrary:mobilenotifications.androidlib:generateReleaseResValues UP-TO-DATE
> Task :launcher:generateReleaseBuildConfig UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:generateReleaseResValues UP-TO-DATE

> Task :unityLibrary:mergeReleaseJniLibFolders UP-TO-DATE
Unable to watch the file system for changes
net.rubygrapefruit.platform.NativeException: Couldn't start watching, error = 1: F:\kho_game\test\MAM\Library\Bee\Android\Prj\IL2CPP\Gradle
	at net.rubygrapefruit.platform.internal.jni.AbstractFileEventFunctions$NativeFileWatcher.startWatching0(Native Method)
	at net.rubygrapefruit.platform.internal.jni.AbstractFileEventFunctions$NativeFileWatcher.startWatching(AbstractFileEventFunctions.java:198)
	at net.rubygrapefruit.platform.internal.jni.WindowsFileEventFunctions$WindowsFileWatcher.startWatching(WindowsFileEventFunctions.java:59)
	at org.gradle.internal.watch.registry.impl.HierarchicalFileWatcherUpdater.updateWatchedHierarchies(HierarchicalFileWatcherUpdater.java:154)
	at org.gradle.internal.watch.registry.impl.HierarchicalFileWatcherUpdater.virtualFileSystemContentsChanged(HierarchicalFileWatcherUpdater.java:92)
	at org.gradle.internal.watch.registry.impl.DefaultFileWatcherRegistry.virtualFileSystemContentsChanged(DefaultFileWatcherRegistry.java:147)
	at org.gradle.internal.watch.vfs.impl.WatchingVirtualFileSystem.lambda$updateNotifyingListeners$0(WatchingVirtualFileSystem.java:89)
	at org.gradle.internal.watch.registry.SnapshotCollectingDiffListener.publishSnapshotDiff(SnapshotCollectingDiffListener.java:32)
	at org.gradle.internal.watch.vfs.impl.WatchingVirtualFileSystem.lambda$updateNotifyingListeners$1(WatchingVirtualFileSystem.java:88)
	at org.gradle.internal.watch.vfs.impl.WatchingVirtualFileSystem.lambda$withWatcherChangeErrorHandling$7(WatchingVirtualFileSystem.java:313)
	at org.gradle.internal.watch.vfs.impl.WatchingVirtualFileSystem.withWatcherChangeErrorHandling(WatchingVirtualFileSystem.java:320)
	at org.gradle.internal.watch.vfs.impl.WatchingVirtualFileSystem.withWatcherChangeErrorHandling(WatchingVirtualFileSystem.java:312)
	at org.gradle.internal.watch.vfs.impl.WatchingVirtualFileSystem.updateNotifyingListeners(WatchingVirtualFileSystem.java:88)
	at org.gradle.internal.vfs.impl.AbstractVirtualFileSystem.lambda$store$1(AbstractVirtualFileSystem.java:46)
	at org.gradle.internal.vfs.impl.VfsRootReference.update(VfsRootReference.java:40)
	at org.gradle.internal.vfs.impl.AbstractVirtualFileSystem.store(AbstractVirtualFileSystem.java:46)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.snapshot(DefaultFileSystemAccess.java:162)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.lambda$readLocation$6(DefaultFileSystemAccess.java:171)
	at java.base/java.util.Optional.orElseGet(Optional.java:369)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.lambda$readSnapshotFromLocation$7(DefaultFileSystemAccess.java:196)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess$StripedProducerGuard.guardByKey(DefaultFileSystemAccess.java:219)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.lambda$readSnapshotFromLocation$8(DefaultFileSystemAccess.java:193)
	at java.base/java.util.Optional.orElseGet(Optional.java:369)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.readSnapshotFromLocation(DefaultFileSystemAccess.java:193)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.readSnapshotFromLocation(DefaultFileSystemAccess.java:178)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.readLocation(DefaultFileSystemAccess.java:171)
	at org.gradle.internal.vfs.impl.DefaultFileSystemAccess.read(DefaultFileSystemAccess.java:83)
	at org.gradle.internal.fingerprint.impl.DefaultFileCollectionSnapshotter$SnapshottingVisitor.visitCollection(DefaultFileCollectionSnapshotter.java:61)
	at org.gradle.api.internal.file.AbstractOpaqueFileCollection.visitContents(AbstractOpaqueFileCollection.java:55)
	at org.gradle.api.internal.file.AbstractFileCollection.visitStructure(AbstractFileCollection.java:330)
	at org.gradle.api.internal.file.CompositeFileCollection.lambda$visitContents$0(CompositeFileCollection.java:119)
	at org.gradle.api.internal.file.collections.UnpackingVisitor.visitSingleFile(UnpackingVisitor.java:111)
	at org.gradle.api.internal.file.collections.UnpackingVisitor.add(UnpackingVisitor.java:106)
	at org.gradle.api.internal.file.DefaultFileCollectionFactory$ResolvingFileCollection.visitChildren(DefaultFileCollectionFactory.java:333)
	at org.gradle.api.internal.file.CompositeFileCollection.visitContents(CompositeFileCollection.java:119)
	at org.gradle.api.internal.file.AbstractFileCollection.visitStructure(AbstractFileCollection.java:330)
	at org.gradle.internal.fingerprint.impl.DefaultFileCollectionSnapshotter.snapshot(DefaultFileCollectionSnapshotter.java:51)
	at org.gradle.internal.execution.DefaultOutputSnapshotter$1.visitOutputProperty(DefaultOutputSnapshotter.java:40)
	at org.gradle.api.internal.tasks.execution.ExecuteActionsTaskExecuter$TaskExecution.visitOutputs(ExecuteActionsTaskExecuter.java:339)
	at org.gradle.internal.execution.DefaultOutputSnapshotter.snapshotOutputs(DefaultOutputSnapshotter.java:37)
	at org.gradle.internal.execution.steps.CaptureStateBeforeExecutionStep.captureExecutionState(CaptureStateBeforeExecutionStep.java:160)
	at org.gradle.internal.execution.steps.CaptureStateBeforeExecutionStep.lambda$captureExecutionStateOp$1(CaptureStateBeforeExecutionStep.java:127)
	at org.gradle.internal.execution.steps.BuildOperationStep$1.call(BuildOperationStep.java:37)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$CallableBuildOperationWorker.execute(DefaultBuildOperationRunner.java:200)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$CallableBuildOperationWorker.execute(DefaultBuildOperationRunner.java:195)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$3.execute(DefaultBuildOperationRunner.java:75)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$3.execute(DefaultBuildOperationRunner.java:68)
	at org.gradle.internal.operations.DefaultBuildOperationRunner.execute(DefaultBuildOperationRunner.java:153)
	at org.gradle.internal.operations.DefaultBuildOperationRunner.execute(DefaultBuildOperationRunner.java:68)
	at org.gradle.internal.operations.DefaultBuildOperationRunner.call(DefaultBuildOperationRunner.java:62)
	at org.gradle.internal.operations.DefaultBuildOperationExecutor.lambda$call$2(DefaultBuildOperationExecutor.java:79)
	at org.gradle.internal.operations.UnmanagedBuildOperationWrapper.callWithUnmanagedSupport(UnmanagedBuildOperationWrapper.java:54)
	at org.gradle.internal.operations.DefaultBuildOperationExecutor.call(DefaultBuildOperationExecutor.java:79)
	at org.gradle.internal.execution.steps.BuildOperationStep.operation(BuildOperationStep.java:34)
	at org.gradle.internal.execution.steps.CaptureStateBeforeExecutionStep.captureExecutionStateOp(CaptureStateBeforeExecutionStep.java:126)
	at org.gradle.internal.execution.steps.CaptureStateBeforeExecutionStep.lambda$execute$0(CaptureStateBeforeExecutionStep.java:72)
	at java.base/java.util.Optional.map(Optional.java:265)
	at org.gradle.internal.execution.steps.CaptureStateBeforeExecutionStep.execute(CaptureStateBeforeExecutionStep.java:72)
	at org.gradle.internal.execution.steps.CaptureStateBeforeExecutionStep.execute(CaptureStateBeforeExecutionStep.java:47)
	at org.gradle.internal.execution.steps.SkipEmptyWorkStep.lambda$execute$2(SkipEmptyWorkStep.java:92)
	at java.base/java.util.Optional.orElseGet(Optional.java:369)
	at org.gradle.internal.execution.steps.SkipEmptyWorkStep.execute(SkipEmptyWorkStep.java:92)
	at org.gradle.internal.execution.steps.SkipEmptyWorkStep.execute(SkipEmptyWorkStep.java:33)
	at org.gradle.internal.execution.steps.legacy.MarkSnapshottingInputsStartedStep.execute(MarkSnapshottingInputsStartedStep.java:38)
	at org.gradle.internal.execution.steps.LoadExecutionStateStep.execute(LoadExecutionStateStep.java:43)
	at org.gradle.internal.execution.steps.LoadExecutionStateStep.execute(LoadExecutionStateStep.java:31)
	at org.gradle.internal.execution.steps.AssignWorkspaceStep.lambda$execute$0(AssignWorkspaceStep.java:40)
	at org.gradle.api.internal.tasks.execution.ExecuteActionsTaskExecuter$TaskExecution$2.withWorkspace(ExecuteActionsTaskExecuter.java:284)
	at org.gradle.internal.execution.steps.AssignWorkspaceStep.execute(AssignWorkspaceStep.java:40)
	at org.gradle.internal.execution.steps.AssignWorkspaceStep.execute(AssignWorkspaceStep.java:30)
	at org.gradle.internal.execution.steps.IdentityCacheStep.execute(IdentityCacheStep.java:37)
	at org.gradle.internal.execution.steps.IdentityCacheStep.execute(IdentityCacheStep.java:27)
	at org.gradle.internal.execution.steps.IdentifyStep.execute(IdentifyStep.java:44)
	at org.gradle.internal.execution.steps.IdentifyStep.execute(IdentifyStep.java:33)
	at org.gradle.internal.execution.impl.DefaultExecutionEngine$1.execute(DefaultExecutionEngine.java:76)
	at org.gradle.api.internal.tasks.execution.ExecuteActionsTaskExecuter.executeIfValid(ExecuteActionsTaskExecuter.java:185)
	at org.gradle.api.internal.tasks.execution.ExecuteActionsTaskExecuter.execute(ExecuteActionsTaskExecuter.java:174)
	at org.gradle.api.internal.tasks.execution.CleanupStaleOutputsExecuter.execute(CleanupStaleOutputsExecuter.java:109)
	at org.gradle.api.internal.tasks.execution.FinalizePropertiesTaskExecuter.execute(FinalizePropertiesTaskExecuter.java:46)
	at org.gradle.api.internal.tasks.execution.ResolveTaskExecutionModeExecuter.execute(ResolveTaskExecutionModeExecuter.java:51)
	at org.gradle.api.internal.tasks.execution.SkipTaskWithNoActionsExecuter.execute(SkipTaskWithNoActionsExecuter.java:57)
	at org.gradle.api.internal.tasks.execution.SkipOnlyIfTaskExecuter.execute(SkipOnlyIfTaskExecuter.java:56)
	at org.gradle.api.internal.tasks.execution.CatchExceptionTaskExecuter.execute(CatchExceptionTaskExecuter.java:36)
	at org.gradle.api.internal.tasks.execution.EventFiringTaskExecuter$1.executeTask(EventFiringTaskExecuter.java:77)
	at org.gradle.api.internal.tasks.execution.EventFiringTaskExecuter$1.call(EventFiringTaskExecuter.java:55)
	at org.gradle.api.internal.tasks.execution.EventFiringTaskExecuter$1.call(EventFiringTaskExecuter.java:52)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$CallableBuildOperationWorker.execute(DefaultBuildOperationRunner.java:200)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$CallableBuildOperationWorker.execute(DefaultBuildOperationRunner.java:195)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$3.execute(DefaultBuildOperationRunner.java:75)
	at org.gradle.internal.operations.DefaultBuildOperationRunner$3.execute(DefaultBuildOperationRunner.java:68)
	at org.gradle.internal.operations.DefaultBuildOperationRunner.execute(DefaultBuildOperationRunner.java:153)
	at org.gradle.internal.operations.DefaultBuildOperationRunner.execute(DefaultBuildOperationRunner.java:68)
	at org.gradle.internal.operations.DefaultBuildOperationRunner.call(DefaultBuildOperationRunner.java:62)
	at org.gradle.internal.operations.DefaultBuildOperationExecutor.lambda$call$2(DefaultBuildOperationExecutor.java:79)
	at org.gradle.internal.operations.UnmanagedBuildOperationWrapper.callWithUnmanagedSupport(UnmanagedBuildOperationWrapper.java:54)
	at org.gradle.internal.operations.DefaultBuildOperationExecutor.call(DefaultBuildOperationExecutor.java:79)
	at org.gradle.api.internal.tasks.execution.EventFiringTaskExecuter.execute(EventFiringTaskExecuter.java:52)
	at org.gradle.execution.plan.LocalTaskNodeExecutor.execute(LocalTaskNodeExecutor.java:74)
	at org.gradle.execution.taskgraph.DefaultTaskExecutionGraph$InvokeNodeExecutorsAction.execute(DefaultTaskExecutionGraph.java:402)
	at org.gradle.execution.taskgraph.DefaultTaskExecutionGraph$InvokeNodeExecutorsAction.execute(DefaultTaskExecutionGraph.java:389)
	at org.gradle.execution.taskgraph.DefaultTaskExecutionGraph$BuildOperationAwareExecutionAction.execute(DefaultTaskExecutionGraph.java:382)
	at org.gradle.execution.taskgraph.DefaultTaskExecutionGraph$BuildOperationAwareExecutionAction.execute(DefaultTaskExecutionGraph.java:368)
	at org.gradle.execution.plan.DefaultPlanExecutor$ExecutorWorker.lambda$run$0(DefaultPlanExecutor.java:127)
	at org.gradle.execution.plan.DefaultPlanExecutor$ExecutorWorker.execute(DefaultPlanExecutor.java:191)
	at org.gradle.execution.plan.DefaultPlanExecutor$ExecutorWorker.executeNextNode(DefaultPlanExecutor.java:182)
	at org.gradle.execution.plan.DefaultPlanExecutor$ExecutorWorker.run(DefaultPlanExecutor.java:124)
	at org.gradle.internal.concurrent.ExecutorPolicy$CatchAndRecordFailures.onExecute(ExecutorPolicy.java:64)
	at org.gradle.internal.concurrent.ManagedExecutorImpl$1.run(ManagedExecutorImpl.java:48)
	at java.base/java.util.concurrent.ThreadPoolExecutor.runWorker(ThreadPoolExecutor.java:1128)
	at java.base/java.util.concurrent.ThreadPoolExecutor$Worker.run(ThreadPoolExecutor.java:628)
	at org.gradle.internal.concurrent.ThreadFactoryImpl$ManagedThreadRunnable.run(ThreadFactoryImpl.java:61)
	at java.base/java.lang.Thread.run(Thread.java:829)

> Task :unityLibrary:mobilenotifications.androidlib:generateReleaseResources UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:generateReleaseResources UP-TO-DATE
> Task :unityLibrary:compileReleaseAidl NO-SOURCE
> Task :launcher:javaPreCompileRelease UP-TO-DATE
> Task :launcher:compileReleaseAidl NO-SOURCE
> Task :launcher:writeReleaseApplicationId UP-TO-DATE
> Task :unityLibrary:mergeReleaseNativeLibs UP-TO-DATE
> Task :unityLibrary:stripReleaseDebugSymbols UP-TO-DATE
> Task :unityLibrary:copyReleaseJniLibsProjectAndLocalJars UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:packageReleaseResources UP-TO-DATE
> Task :unityLibrary:compileReleaseRenderscript NO-SOURCE
> Task :unityLibrary:mobilenotifications.androidlib:packageReleaseResources UP-TO-DATE
> Task :launcher:analyticsRecordingRelease
> Task :launcher:generateReleaseResValues UP-TO-DATE
> Task :unityLibrary:generateReleaseBuildConfig UP-TO-DATE
> Task :launcher:createReleaseCompatibleScreenManifests UP-TO-DATE
> Task :launcher:extractDeepLinksRelease UP-TO-DATE
> Task :launcher:extractProguardFiles UP-TO-DATE
> Task :unityLibrary:generateReleaseResValues UP-TO-DATE
> Task :unityLibrary:generateReleaseResources UP-TO-DATE
> Task :launcher:mergeReleaseJniLibFolders UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:parseReleaseLocalResources UP-TO-DATE
> Task :unityLibrary:mobilenotifications.androidlib:parseReleaseLocalResources UP-TO-DATE
> Task :unityLibrary:packageReleaseResources UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:processReleaseManifest UP-TO-DATE
> Task :unityLibrary:parseReleaseLocalResources UP-TO-DATE
> Task :unityLibrary:mobilenotifications.androidlib:processReleaseManifest UP-TO-DATE
> Task :unityLibrary:processReleaseManifest UP-TO-DATE
> Task :unityLibrary:javaPreCompileRelease UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:generateReleaseRFile UP-TO-DATE
> Task :unityLibrary:mobilenotifications.androidlib:generateReleaseRFile UP-TO-DATE
> Task :unityLibrary:FirebaseApp.androidlib:generateReleaseBuildConfig UP-TO-DATE
> Task :unityLibrary:mergeReleaseShaders UP-TO-DATE
> Ta<message truncated>