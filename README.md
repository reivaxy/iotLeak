# iotSwitch

This is the second slave module for the iotinator project, its purpose will be to send alerts through the iotinator framework when it detects a water leak.

For now, it's a simple stub to help create more complex slave modules, like iotSwitch, but I needed two different modules.

This one uses a class that extends the XIOTModule class, which allows for providing for instance custom data when registering with master, so that it will be available in the UI with no more requests.

For now, the extension only provides dummy custom data, to illustrate how it can be done.

Specific API endpoints for this module can be implemented in the .ino file.

You'll need to clone these repositories into your arduino "libraries" directory to be able to compile:

- https://github.com/reivaxy/XIOTModule.git
- https://github.com/reivaxy/XIOTDisplay.git
- https://github.com/reivaxy/XIOTConfig.git
- https://github.com/reivaxy/XOLEDDisplay.git 
- https://github.com/reivaxy/XEEPROMConfig.git
- https://github.com/reivaxy/XUtils.git


And some libraries that can be found through the Arduino IDE

TODO: list the libraries :)
 
 