#include "path.h"

inherit "/std/room/outside";

void setup() {
  add_property( "determinate", "the " );
  set_short( "northwestern corner of Womble square" );
  set_long("This is the western edge of Tiny Town, a small "
           "town built as an example for new creators who might want to see "
           "how to make rooms, npc's and such without the complexity of "
           "the \"real\" domains.\n");
   
  set_zone( "Tiny Town");

  // This links the other square rooms to this one so people can see
  // movement across the square.
  set_linker(({ PATH +"womble01", PATH +"womble03", PATH +"womble04", }),
             "into", "", "Womble Square" );
  
  add_exit( "south", PATH +"womble01", "road" );  
  add_exit( "southeast", PATH +"womble02", "hidden" );
  add_exit( "east", PATH +"womble04", "road" );
}

