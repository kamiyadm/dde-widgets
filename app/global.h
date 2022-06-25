/*
 * Copyright (C) 2022 UnionTech Technology Co., Ltd.
 *
 * Author:     yeshanshan <yeshanshan@uniontech.com>
 *
 * Maintainer: yeshanshan <yeshanshan@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QSize>
#include <QColor>
#include <widgetsglobal.h>
#include <QMargins>

#define WIDGETS_FRAME_NAMESPACE dwf // dde-widgets frame

#define WIDGETS_FRAME_BEGIN_NAMESPACE namespace WIDGETS_FRAME_NAMESPACE {
#define WIDGETS_FRAME_END_NAMESPACE }
#define WIDGETS_FRAME_USE_NAMESPACE using namespace WIDGETS_FRAME_NAMESPACE;

class QSettings;
WIDGETS_BEGIN_NAMESPACE
class WidgetPluginSpec;
class IWidget;
WIDGETS_END_NAMESPACE

WIDGETS_FRAME_BEGIN_NAMESPACE
using PluginId = QString;
using PluginPath = QString;
using InstanceId = QString;
using InstancePos = int;
using WidgetPlugin = WIDGETS_NAMESPACE::WidgetPluginSpec;
using Instance = WIDGETS_NAMESPACE::IWidget;
using DataStore = QSettings;

static const char* EditModeMimeDataFormat = "application/dde-widgets-storedata";

namespace UI {
    static const QMargins defaultMargins(0, 0, 0, 0);
    static const int topMargin = 22;
    static const int bottomMargin = 10;
    static const int SizeType = 3;

namespace Widget {
    static const QSize SmallSize(170, 170);
    static const QSize StoreSmallSize(130, 130);
    static const QSize MiddleSize(360, 170);
    static const QSize StoreMiddleSize(180, 130);
    static const QSize LargeSize(360, 360);
    static const QSize StoreLargeSize(180, 180);
    static const QSize CustomSize(360, 600);
    static const QSize StoreCustomSize(360, 360);
}

namespace Store {
    static const QSize TypeBtnSize(28, 24);
    static const QSize TypeBoxSize(TypeBtnSize.width() * SizeType, 24);
    static const QSize AddIconSize(17, 17);
    static const int leftMargin = 0;
    static const int rightMargin = 0;
    static const int topMargin = 18;
    static const int bottomMargin = 30;
    static const int spacing = 10;
    static const QSize cellSize(302, 312);
    static const int panelWidth = leftMargin + rightMargin + cellSize.width();
    static const QColor cellBackgroundColor(0, 0, 0, 0.05 * 255);
    static const int pluginCellRadius = 18;
}
namespace Ins {
    static const int spacing = 20;
    static const int button2FlowPanelTopMargin = 20;
}
namespace Edit {
    static const QSize CompleteSize(140, 36);
    static const QSize DeleteIconSize(17, 17);
    static const int leftMargin = 0;
    static const int rightMargin = 10;
    static const int topMargin = 0;
    static const int bottomMargin = 0;
    static const int panelWidth = leftMargin + rightMargin + Widget::MiddleSize.width() + 1;
    static const int titleLeftMargin = 10;
}

namespace Display {
    static const QSize EditSize(140, 36);
    static const int leftMargin = 0;
    static const int rightMargin = 10;
    static const int topMargin = 0;
    static const int bottomMargin = 0;
    // TODO it would wrap if two Cell's Width add spacing is equal DFlowLayout's width, it maybe DFlowLayout's bug.
    static const int panelWidth = leftMargin + rightMargin + Widget::MiddleSize.width() + 1;
}

namespace DisMode {
    static const int leftMargin = 0;
    static const int rightMargin = 0;
    static const int width = leftMargin + rightMargin + Display::panelWidth;
}

namespace EditMode {
    static const int leftMargin = 22;
    static const int rightMargin = 11;
    static const int width = 742;
    static const int spacing = 37;
}

}
WIDGETS_FRAME_END_NAMESPACE
