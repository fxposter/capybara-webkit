#include "NullIODevice.h"

NullIODevice::NullIODevice(QObject *parent) : QIODevice(parent) {
}

qint64 NullIODevice::readData(char *data, qint64 maxSize) {
  Q_UNUSED(data);
  Q_UNUSED(maxSize);
  return 0;
}

qint64 NullIODevice::writeData(const char *data, qint64 maxSize) {
  Q_UNUSED(data);
  Q_UNUSED(maxSize);
  return 0;
}
