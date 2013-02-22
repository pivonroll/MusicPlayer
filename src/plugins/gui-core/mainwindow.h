#ifndef GUICORE_GUI_MAINWINDOW_H
#define GUICORE_GUI_MAINWINDOW_H

#include <QMainWindow>

namespace GuiCore {
namespace Gui {

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    void refreshMenuBar(QList<QMenu *> menus);
};

} // namespace Gui
} // namespace GuiCore

#endif // GUICORE_GUI_MAINWINDOW_H
