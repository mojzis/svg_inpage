# SVG in page
Helps to add a piece of SVG into your HTML(5). That can be useful i.e. when you want to write some javascript for the graphics.
Simply take the SVG file as came from your colleague and it will be displayed on a page or in a block.

## what it does
* include selected file in a page or a block

## how to use
### configuration
* thus far none ;)

### site builders
* sorry, at the moment you have to write some code

### module creators
* add a hook to define a page or a block
  * svg_inpage_pages
  * svg_inpage_blocks
* see example module svg_inpage_example
* best results will be acheived with an HTML5 theme

## plans & ideas :

### configuration
* different methods of including the file
* try to find a js library to show the svg in older browsers
* attempt a raphael display, too

### own pages
* create an entity with :
  * file
  * address
  * settings
* think of a way to allow the same in code (features, ctools ...)

### caching
* cache the changed files !
* cache the definitions (?)
  * pages
  * blocks

### add tests

### make the code more OO
* file , page ?

### javascript
* jQuery('svg g').attr('id')

### svg manipulation
* set width and weigth automatically to 100%

### other stuff
* blocks
* field & views handler
* media cooperation ?
* anything else ?

### advanced help
* info about SVG in HTML
  * browser support
