#############################################################################
# Makefile for building: RSA
# Generated by qmake (3.0) (Qt 5.4.0)
# Project:  RSA.pro
# Template: app
# Command: C:\Qt\5.4.0_MinGW_static\bin\qmake.exe -spec win32-g++ CONFIG+=release -o Makefile RSA.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = C:\Qt\5.4.0_MinGW_static\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: RSA.pro c:/Qt/5.4.0_MinGW_static/mkspecs/win32-g++/qmake.conf c:/Qt/5.4.0_MinGW_static/mkspecs/features/spec_pre.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/qdevice.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/device_config.prf \
		C:/Qt/5.4.0_MinGW_static/mkspecs/common/shell-win32.conf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/qconfig.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_axbase.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_axbase_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_axcontainer.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_axcontainer_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_axserver.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_axserver_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_bluetooth.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_bluetooth_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_bootstrap_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_clucene_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_concurrent.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_concurrent_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_core.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_core_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_declarative.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_declarative_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_designer.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_designer_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_designercomponents_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_gui.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_gui_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_help.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_help_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_location.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_location_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_multimedia.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_multimedia_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_multimediawidgets.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_network.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_network_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_nfc.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_nfc_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_opengl.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_opengl_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_openglextensions.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_openglextensions_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_platformsupport_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_positioning.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_positioning_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_printsupport.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_printsupport_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_qml.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_qml_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_qmltest.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_qmltest_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_quick.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_quick_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_quickparticles_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_quickwidgets.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_script.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_script_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_scripttools.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_scripttools_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_sensors.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_sensors_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_serialport.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_serialport_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_sql.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_sql_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_svg.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_svg_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_testlib.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_testlib_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_uitools.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_uitools_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_webchannel.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_webchannel_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_websockets.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_websockets_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_widgets.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_widgets_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_winextras.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_winextras_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_xml.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_xml_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_xmlpatterns.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_dsengine.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qdds.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qdeclarativeview.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qgenericbearer.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qicns.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qico.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qjp2.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qminimal.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qmldbg_inspector.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qmldbg_qtquick2.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qmldbg_tcp.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qmldbg_tcp_qtdeclarative.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qmng.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qnativewifibearer.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qoffscreen.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qsvg.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qsvgicon.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtaudio_windows.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtga.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtgeoservices_nokia.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtgeoservices_osm.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtiff.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtmedia_audioengine.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtmultimedia_m3u.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtposition_positionpoll.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtsensorgestures_plugin.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtsensorgestures_shakeplugin.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtsensors_dummy.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qtsensors_generic.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qwbmp.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qwebp.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_qwindows.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/modules/qt_plugin_windowsprintersupport.pri \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/qt_functions.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/qt_config.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/win32/qt_config.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/win32-g++/qmake.conf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/spec_post.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/exclusive_builds.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/default_pre.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/win32/default_pre.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/resolve_config.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/exclusive_builds_post.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/default_post.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/win32/rtti.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/precompile_header.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/warn_on.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/qt.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/resources.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/moc.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/win32/opengl.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/uic.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/win32/windows.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/testcase_targets.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/exceptions.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/yacc.prf \
		c:/Qt/5.4.0_MinGW_static/mkspecs/features/lex.prf \
		RSA.pro \
		c:/Qt/5.4.0_MinGW_static/lib/qtmain.prl \
		c:/Qt/5.4.0_MinGW_static/lib/Qt5Core.prl \
		c:/Qt/5.4.0_MinGW_static/lib/Qt5Widgets.prl \
		c:/Qt/5.4.0_MinGW_static/lib/Qt5Gui.prl \
		c:/Qt/5.4.0_MinGW_static/lib/qtharfbuzzng.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/platforms/qwindows.prl \
		c:/Qt/5.4.0_MinGW_static/lib/Qt5PlatformSupport.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qdds.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qicns.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qico.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qjp2.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qmng.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qtga.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qtiff.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qwbmp.prl \
		c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qwebp.prl
	$(QMAKE) -spec win32-g++ CONFIG+=release -o Makefile RSA.pro
c:\Qt\5.4.0_MinGW_static\mkspecs\features\spec_pre.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\qdevice.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\device_config.prf:
C:\Qt\5.4.0_MinGW_static\mkspecs\common\shell-win32.conf:
c:\Qt\5.4.0_MinGW_static\mkspecs\qconfig.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_axbase.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_axbase_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_axcontainer.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_axcontainer_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_axserver.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_axserver_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_bluetooth.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_bluetooth_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_bootstrap_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_clucene_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_concurrent.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_concurrent_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_core.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_core_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_declarative.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_declarative_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_designer.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_designer_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_designercomponents_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_gui.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_gui_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_help.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_help_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_location.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_location_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_multimedia.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_multimedia_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_multimediawidgets.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_network.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_network_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_nfc.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_nfc_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_opengl.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_opengl_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_openglextensions.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_openglextensions_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_platformsupport_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_positioning.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_positioning_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_printsupport.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_printsupport_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_qml.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_qml_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_qmldevtools_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_qmltest.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_qmltest_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_quick.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_quick_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_quickparticles_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_quickwidgets.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_quickwidgets_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_script.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_script_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_scripttools.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_scripttools_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_sensors.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_sensors_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_serialport.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_serialport_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_sql.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_sql_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_svg.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_svg_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_testlib.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_testlib_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_uitools.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_uitools_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_webchannel.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_webchannel_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_websockets.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_websockets_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_widgets.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_widgets_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_winextras.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_winextras_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_xml.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_xml_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_xmlpatterns.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_dsengine.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qdds.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qdeclarativeview.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qgenericbearer.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qicns.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qico.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qjp2.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qminimal.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qmldbg_inspector.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qmldbg_qtquick2.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qmldbg_tcp.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qmldbg_tcp_qtdeclarative.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qmng.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qnativewifibearer.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qoffscreen.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qsvg.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qsvgicon.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtaudio_windows.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtga.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtgeoservices_nokia.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtgeoservices_osm.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtiff.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtmedia_audioengine.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtmultimedia_m3u.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtposition_positionpoll.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtsensorgestures_plugin.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtsensorgestures_shakeplugin.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtsensors_dummy.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qtsensors_generic.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qwbmp.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qwebp.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_qwindows.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\modules\qt_plugin_windowsprintersupport.pri:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\qt_functions.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\qt_config.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\win32\qt_config.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\win32-g++\qmake.conf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\spec_post.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\exclusive_builds.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\default_pre.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\win32\default_pre.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\resolve_config.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\exclusive_builds_post.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\default_post.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\win32\rtti.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\precompile_header.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\warn_on.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\qt.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\resources.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\moc.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\win32\opengl.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\uic.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\win32\windows.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\testcase_targets.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\exceptions.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\yacc.prf:
c:\Qt\5.4.0_MinGW_static\mkspecs\features\lex.prf:
RSA.pro:
c:/Qt/5.4.0_MinGW_static/lib/qtmain.prl:
c:/Qt/5.4.0_MinGW_static/lib/Qt5Core.prl:
c:/Qt/5.4.0_MinGW_static/lib/Qt5Widgets.prl:
c:/Qt/5.4.0_MinGW_static/lib/Qt5Gui.prl:
c:/Qt/5.4.0_MinGW_static/lib/qtharfbuzzng.prl:
c:/Qt/5.4.0_MinGW_static/plugins/platforms/qwindows.prl:
c:/Qt/5.4.0_MinGW_static/lib/Qt5PlatformSupport.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qdds.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qicns.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qico.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qjp2.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qmng.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qtga.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qtiff.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qwbmp.prl:
c:/Qt/5.4.0_MinGW_static/plugins/imageformats/qwebp.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ CONFIG+=release -o Makefile RSA.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) "C:\Users\Jimmy White\Desktop\RSA\RSA\rsa_plugin_import.cpp"

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
