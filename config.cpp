/**
 *  Class to persist the iotLeak module configuration data structure to EEPROM 
 *  Xavier Grosjean 2018
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 
#include "config.h"


LeakConfigClass::LeakConfigClass(unsigned int version, const char* name):ModuleConfigClass(version, name, sizeof(LeakConfigStruct)) {
}

/**
 * Reset the config data structure to the default values.
 * This is done each time the data structure version is different from the one saved in EEPROM
 * NB: version and name are handled by base class 
 */
void LeakConfigClass::initFromDefault() {
  ModuleConfigClass::initFromDefault(); // handles version and name init, ssid and pwd
  setAutoWake(DEFAULT_AUTOWAKE_VALUE);
}


void LeakConfigClass::setAutoWake(int delay) {
   _getDataPtr()->autoWake = delay;
}

int LeakConfigClass::getAutoWake() {
   return _getDataPtr()->autoWake;
}
/**
 * Return the typed data structure object
 *
 */
LeakConfigStruct* LeakConfigClass::_getDataPtr(void) {
  return (LeakConfigStruct*)ModuleConfigClass::_getDataPtr();
}