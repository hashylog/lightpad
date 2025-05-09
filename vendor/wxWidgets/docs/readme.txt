wxWidgets 3.2.7 Release Notes
=============================

Welcome to the new stable release of wxWidgets, a free and open source
cross-platform C++ framework for writing advanced GUI applications using
native controls.

wxWidgets allows you to write native-looking GUI applications for all the major
desktop platforms and also helps with abstracting the differences in the non-GUI
aspects between them. It is free for the use in both open source and commercial
applications, comes with the full, easy to read and modify, source and extensive
documentation and a collection of more than a hundred examples. You can learn
more about wxWidgets at:

* https://www.wxwidgets.org/

Documentation is available online at:

* https://docs.wxwidgets.org/3.2.7/

wxWidgets sources and binaries for the selected platforms are available for
download from:

* https://www.wxwidgets.org/downloads/

or, for a more more permanent but less convenient to use link, from

* https://github.com/wxWidgets/wxWidgets/releases/tag/v3.2.7/

Please see https://docs.wxwidgets.org/3.2.7/overview_install.html for full
installation instructions.



Changes since 3.2.6
-------------------

This release contains more than a hundred bug fixes and improvements. Some of
the most important fixes are:

- Build fixes for gcc 14 (#24248, #24869) and clang 19 (#24922, #24959, #25064).
- Fix build with macOS 15 SDK (#24724, #24879).
- Many fixes to key event generation in wxGTK (#25053, #25199, #25200).
- Avoid repaint problems when using wxWindow::Update() with Wayland (#25036).
- Fix crashes when using wxWebRequest with libcurl (#24885, #24969).

New in this release:

- Add wxNO_UNUSED_VARIABLES to opt-in into getting helpful warnings (#24882).
- Add wxApp::SetErrorExitCode() to better handle initialization errors (#24770).

Other changes include:

- More high DPI fixes in wxMSW (#24650, #24651, #24815, #24850, #24821, #24941).
- Improve wxInfoBar appearance (#24838, #24902, #25048).
- Fix possible crash during session termination in wxMSW (#24903).
- Wayland fixes to copy-pasting (#24701) and drag-and-drop (#25116) in wxGTK.
- Fix truncating labels of newly added wxNotebook pages in wxOSX (#25194).
- Fix Z-order of auto-complete popup of wxStyledTextCtrl in wxOSX (#25202).
- Fix buffer read overflow when compiling RE ending with backslash (#25040).
- Make wxTempFile::Commit() and wxRenameFile() really atomic (#25088).

and more, please see the full change log for more details:

https://raw.githubusercontent.com/wxWidgets/wxWidgets/v3.2.7/docs/changes.txt

This release is API and ABI-compatible with the previous 3.2.x releases, so
the existing applications don't even need to be rebuilt to profit from all the
fixes above if they use shared/dynamic libraries. And if they do need to be
recompiled, this can be done without any changes to the code.



Supported Platforms
-------------------

This version of wxWidgets supports the following primary platforms:

* Windows XP, Vista, 7, 8, 10 and 11 (32/64 bits).
* Most Unix variants using the GTK toolkit (version 2.6 or newer)
* macOS (10.10 or newer) using Cocoa (x86-64 or ARM).

There is some support for the following platforms:

* Most Unix variants with X11
* Most Unix variants with Motif/Lesstif
* Most Unix variants with GTK+ 1.2
* Most Unix variants with Qt 5 or newer (experimental)

All C++ compilers in common use are supported.


Licence
-------

For licensing information, please see the files:

* docs/preamble.txt
* docs/licence.txt
* docs/licendoc.txt
* docs/gpl.txt
* docs/lgpl.txt
* docs/xserver.txt

Although this may seem complex, it is there to allow authors of proprietary,
commercial applications to use wxWidgets in addition to those writing GPL'ed
applications. In summary, the licence is LGPL plus a clause allowing
unrestricted distribution of application binaries. To answer a FAQ, you don't
have to distribute any source if you wish to write commercial applications using
wxWidgets.

However, if you distribute wxGTK, wxQt or wxMotif (with Lesstif) version of your
application, don't forget that it is linked against GTK+, Qt or Lesstif, which
are covered by LGPL *without* exception notice and so is bound by its
requirements.

If you use TIFF image handler, please see src/tiff/COPYRIGHT for libtiff licence
details.

If you use JPEG image handler, documentation for your program should contain
following sentence: "This software is based in part on the work of the
Independent JPEG Group". See src/jpeg/README for details.

If you use wxRegEx class, please see 3rdparty/pcre/LICENCE for PCRE licence
details.

If you use wxXML classes or XRC, see src/expat/COPYING for licence details.


Reporting Bugs
--------------

The wxWidgets bug tracker can be found here:

* https://github.com/wxWidgets/wxWidgets/issues/

Please use the search function find any possibly relevant bugs before reporting
new ones. Also please notice that often trying to correct the bug yourself is
the quickest way to fix it. Even if you fail to do it, you may discover
valuable information allowing us to fix it while doing it. We also give much
higher priority to bug reports with patches fixing the problems so this ensures
that your report will be addressed sooner.


Further Information
-------------------

If you are looking for community support, you can get it from

* Mailing Lists: https://www.wxwidgets.org/support/mailing-lists/
* Discussion Forums: https://forums.wxwidgets.org/
* #wxwidgets IRC Channel: https://www.wxwidgets.org/support/irc/
* Stack Overflow (tag your questions with "wxwidgets"):
  https://stackoverflow.com/questions/tagged/wxwidgets

Commercial support is also available, please see
https://www.wxwidgets.org/support/commercial/

Finally, keep in mind that wxWidgets is an open source project collaboratively
developed by its users and your contributions to it are always welcome!


Have fun!

The wxWidgets Team, March 2025
