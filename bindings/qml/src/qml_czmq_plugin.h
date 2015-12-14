/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#ifndef QML_CZMQ_PLUGIN_H
#define QML_CZMQ_PLUGIN_H

#include <QQmlExtensionPlugin>
#include <qqml.h>

class QmlZactor;
class QmlZactorAttached;
class QmlZarmour;
class QmlZarmourAttached;
class QmlZcert;
class QmlZcertAttached;
class QmlZcertstore;
class QmlZcertstoreAttached;
class QmlZconfig;
class QmlZconfigAttached;
class QmlZdir;
class QmlZdirAttached;
class QmlZdirPatch;
class QmlZdirPatchAttached;
class QmlZfile;
class QmlZfileAttached;
class QmlZframe;
class QmlZframeAttached;
class QmlZhash;
class QmlZhashAttached;
class QmlZhashx;
class QmlZhashxAttached;
class QmlZiflist;
class QmlZiflistAttached;
class QmlZlist;
class QmlZlistAttached;
class QmlZloop;
class QmlZloopAttached;
class QmlZmsg;
class QmlZmsgAttached;
class QmlZpoller;
class QmlZpollerAttached;
class QmlZsock;
class QmlZsockAttached;
class QmlZstr;
class QmlZstrAttached;
class QmlZtrie;
class QmlZtrieAttached;
class QmlZuuid;
class QmlZuuidAttached;

#include "QmlZactor.h"
#include "QmlZarmour.h"
#include "QmlZcert.h"
#include "QmlZcertstore.h"
#include "QmlZconfig.h"
#include "QmlZdir.h"
#include "QmlZdirPatch.h"
#include "QmlZfile.h"
#include "QmlZframe.h"
#include "QmlZhash.h"
#include "QmlZhashx.h"
#include "QmlZiflist.h"
#include "QmlZlist.h"
#include "QmlZloop.h"
#include "QmlZmsg.h"
#include "QmlZpoller.h"
#include "QmlZsock.h"
#include "QmlZstr.h"
#include "QmlZtrie.h"
#include "QmlZuuid.h"

class QmlCZMQPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA (IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes (const char *uri)
    {
        qmlRegisterType<QmlZactor> (uri, 1, 0, "QmlZactor");
        qmlRegisterType<QmlZactorAttached>();
        qmlRegisterType<QmlZarmour> (uri, 1, 0, "QmlZarmour");
        qmlRegisterType<QmlZarmourAttached>();
        qmlRegisterType<QmlZcert> (uri, 1, 0, "QmlZcert");
        qmlRegisterType<QmlZcertAttached>();
        qmlRegisterType<QmlZcertstore> (uri, 1, 0, "QmlZcertstore");
        qmlRegisterType<QmlZcertstoreAttached>();
        qmlRegisterType<QmlZconfig> (uri, 1, 0, "QmlZconfig");
        qmlRegisterType<QmlZconfigAttached>();
        qmlRegisterType<QmlZdir> (uri, 1, 0, "QmlZdir");
        qmlRegisterType<QmlZdirAttached>();
        qmlRegisterType<QmlZdirPatch> (uri, 1, 0, "QmlZdirPatch");
        qmlRegisterType<QmlZdirPatchAttached>();
        qmlRegisterType<QmlZfile> (uri, 1, 0, "QmlZfile");
        qmlRegisterType<QmlZfileAttached>();
        qmlRegisterType<QmlZframe> (uri, 1, 0, "QmlZframe");
        qmlRegisterType<QmlZframeAttached>();
        qmlRegisterType<QmlZhash> (uri, 1, 0, "QmlZhash");
        qmlRegisterType<QmlZhashAttached>();
        qmlRegisterType<QmlZhashx> (uri, 1, 0, "QmlZhashx");
        qmlRegisterType<QmlZhashxAttached>();
        qmlRegisterType<QmlZiflist> (uri, 1, 0, "QmlZiflist");
        qmlRegisterType<QmlZiflistAttached>();
        qmlRegisterType<QmlZlist> (uri, 1, 0, "QmlZlist");
        qmlRegisterType<QmlZlistAttached>();
        qmlRegisterType<QmlZloop> (uri, 1, 0, "QmlZloop");
        qmlRegisterType<QmlZloopAttached>();
        qmlRegisterType<QmlZmsg> (uri, 1, 0, "QmlZmsg");
        qmlRegisterType<QmlZmsgAttached>();
        qmlRegisterType<QmlZpoller> (uri, 1, 0, "QmlZpoller");
        qmlRegisterType<QmlZpollerAttached>();
        qmlRegisterType<QmlZsock> (uri, 1, 0, "QmlZsock");
        qmlRegisterType<QmlZsockAttached>();
        qmlRegisterType<QmlZstr> (uri, 1, 0, "QmlZstr");
        qmlRegisterType<QmlZstrAttached>();
        qmlRegisterType<QmlZtrie> (uri, 1, 0, "QmlZtrie");
        qmlRegisterType<QmlZtrieAttached>();
        qmlRegisterType<QmlZuuid> (uri, 1, 0, "QmlZuuid");
        qmlRegisterType<QmlZuuidAttached>();
    };
};

#endif

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
