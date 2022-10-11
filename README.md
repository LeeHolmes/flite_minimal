# Bare Bones Flite

This is a minimal bare-bones version of the amazing [https://github.com/festvox/flite](Flite text-to-speech library). Unlike the main distribution that includes training tools, tools to create custom voices, and many voice options - this version is the bare minimum to build Flite's three basic English text-to-speech libraries:

```
flite
flite_usenglish
flite_cmulex
```

You can diff this branch against the official head revision to see the major cuts, but in brief:

- Removes multi-platform support (such as DLLs)
- Removes alternate build chains (such as Visual Studio projects and DLLs)
- Removes tooling to train new models
- Removes all but the best-sounding voice (cmu_us_fem.flitevox)

Note: Most Linux systems offer "flite1_dev" for these static libraries. If those are available, you are likely better off using those instead.
