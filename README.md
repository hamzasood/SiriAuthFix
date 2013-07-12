SiriAuthFix
===========

Allows pre-4S devices to pass Siri's authentication checks

This is just something I found lying aruond on my computer from about a year ago, thought I should probably open source it now.
I haven't tested this since the iPhone 5 was released, I was using it with no issues on an iPhone 4 on all software versions before that.
Note that failed authentication attempts are cached in the keychain for a certain amount of time, so even with this installed it won't work until that cache is cleared. Since I could never be bothered to mess around with the keychain or anything I always just applied this straight away after a clean install without even opening Siri beforehand (as that failed attempt would be cached). I couldn't figure out any other way of doing it (well... Apart from deleting the keychain... Whatever you do don't do that...... Lead to needing a clean restore anyway after how much stuff broke because of doing that... >_<)
This should be injected into absinthed and assistantd (can't remeber if I included a plist for that)
