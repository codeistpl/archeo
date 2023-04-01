#pragma once

#include <QString>
#include <QStringLiteral>

namespace archeo {

struct  Version{
    QString getVersion()const{
        return QStringLiteral("%1.%2.%3").arg(this->major).arg(this->minor).arg(this->patch);
    }

    unsigned short int major=0, minor=0, patch=0;
};

// modify version here
constexpr static Version version = {0,0,1};

const QString getVersion() {
    return version.getVersion();
}

}
