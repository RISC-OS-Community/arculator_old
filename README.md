# Arculator

An Acorn Archimedes Emulator for Linux and Windows from Sarah Walker.

This is *NOT* the official Arculator repository! This is just a work-in-progress to port it to macOS.

For the original Arculator repository please check [here](https://github.com/sarah-walker-pcem/arculator).

# How to build on macOS

Make sure you have Homebrew installed first.

then clone this repo using a git client.

then:

```
cd arculator
```

and run:
```
./mac-setup
```

Then configure the build using:
```
./configure --with-sdl-prefix=/opt/homebrew/
```

And then try to build using:
```
make
```

Given this is still being fixed when and if I have time, consider it won't complete the build yet.

I am sharing the code because someone asked me to and proposed to help me porting it to the mac.

Enjoy and if you're going to provide help with the port, thanks in advance!

# Help porting it

Please make sure you add a comment around everything you patch to make it build and run on macOS.

Comment format should be:
```
/*
 * <your-name> fix: describe why you fixed it,
 *                  also using multiple lines.
 *             was: type original code.
 *              is: type your specific fix.
 */
```

Please make sure you always have a clean copy of arculator, do not submit the copy you've tried to build.

I use this form:

```
arculator
arculator.orig
```

I patch stuff and test builds in arculator and then cxopy the fixes in `arculator.orig`

When done I push `arculator.orig` in the gitHub repo.

The reason for this a bit unusual behaviour is that I have notice the original build procesdure doesn't clean up well and so there is a risk we may upload stuff that is specific for macOS.

Thanks for your understanding.

