#include "mainwindow.h"
#include <QMenuBar>

namespace GuiCore {
namespace Gui {

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
}

void MainWindow::refreshMenuBar(QList<QMenu *> menus)
{
    foreach (QMenu *menu, menus) {
        if(menu) {
            this->menuBar()->addMenu(menu);
        }
    }
}

} // namespace Gui
} // namespace GuiCore
