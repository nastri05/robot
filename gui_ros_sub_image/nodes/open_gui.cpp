#include<ros_gui.h>
#include<QApplication>
int main(int argc, char *argv[])
{

  ros::init(argc, argv, "gui_node",ros::init_options::AnonymousName);
  QApplication a(argc, argv);

  Ros_Gui w;

  // set the window title as the node name
  w.setWindowTitle(QString::fromStdString(
                       ros::this_node::getName()));

  // load the icon from our qrc file and set it as the application icon

  w.show();
  return a.exec();
}
