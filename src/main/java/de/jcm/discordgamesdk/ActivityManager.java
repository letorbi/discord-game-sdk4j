package de.jcm.discordgamesdk;

import de.jcm.discordgamesdk.activity.Activity;
import org.jetbrains.annotations.NotNull;

import java.util.function.Consumer;

public class ActivityManager
{
	private long pointer;

	ActivityManager(long pointer)
	{
		this.pointer = pointer;
	}

	public void updateActivity(Activity activity)
	{
		updateActivity(activity, Core.DEFAULT_CALLBACK);
	}

	public void updateActivity(Activity activity, @NotNull Consumer<Result> callback)
	{
		updateActivity(pointer, activity.getPointer(), callback);
	}

	private native void updateActivity(long pointer, long activityPointer, Consumer<Result> callback);
}