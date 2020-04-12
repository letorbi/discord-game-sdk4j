package de.jcm.discordgamesdk;

public class CreateParams implements AutoCloseable
{
	private long pointer;

	public CreateParams()
	{
		this.pointer = allocate();
	}

	public void setClientID(long id)
	{
		setClientID(pointer, id);
	}

	public long getClientID()
	{
		return getClientID(pointer);
	}

	public void setFlags(long flags)
	{
		setFlags(pointer, flags);
	}

	public long getFlags()
	{
		return getFlags(pointer);
	}

	private native long allocate();
	private native void free(long pointer);

	private native void setClientID(long pointer, long id);
	private native long getClientID(long pointer);

	private native void setFlags(long pointer, long flags);
	private native long getFlags(long pointer);

	public static native long getDefaultFlags();

	@Override
	public void close()
	{
		free(pointer);
	}

	public long getPointer()
	{
		return pointer;
	}
}