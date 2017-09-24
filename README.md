# Word100 Library

A simple library for The "100+ Word" Arduino Audio Shield! Speak Arduino, Speak!  
by Patrick Thomas Mitchell  
http://www.engineeringshock.com/100-word-arduino-audio-shield.html  
  
Library version 1.0 Sept 23, 2017 by LeRoy Miller  

## Installation

Remove the -master from the file name, unzip and move folder to your Arduino library folder.

## Things To Do

## Usage

The library attempts to use the words from the word list provided by Patrick Thomas Mitchell.  For the most part this is accomplished.  
 See the Information_README.txt file for specifics on some of the words.  
  
include the library  
```#include "Word100.h";```   
invoke the class:  
```Word100 Word100(10);```   
or for the custom ham radio chip:   
```Word100ham Word100(10);```   
in setup begin the class:   
```Word100.begin();```  
say your word - examples show how to do this from an array, but...   
```Word100.say(word);```   

See Information_README.txt file for more information on the specifics of some of  
the words used in this library.   


## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Support Me

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  

## Other Projects

https://www.youtube.com/channel/UCP6Vh4hfyJF288MTaRAF36w  
https://kd8bxp.blogspot.com/  


## Credits

Copyright (c) 2017 LeRoy Miller

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>