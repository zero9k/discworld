class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
class item_data {
    string skill;
    int    difficulty;
    int    upper;
    mixed  extra;
    string *season;
    mixed  quant;
    string ob;
}
void dest_me() { destruct( this_object() ); }
mixed data_return() {
  class item_data item;
  mapping data = ([ ]);

  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/floppy_madman.ob";
  data["floppy madman"] = item;
  item = new( class item_data );
  item->skill = "";
  item->difficulty = 0;
  item->upper = 0;
  item->extra = 0;
  item->season = ({ "spring", "summer" });
  item->quant = (: random(4) + 5 :);
  item->ob = "/obj/plants/pink_clover.ob";
  data["pink clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring" });
  item->quant = (: random(2) + 3 :);
  item->ob = "/std/plant";
  data["white clover"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn" });
  item->quant = (: random(6) + 20 :);
  item->ob = "/obj/plants/grass.ob";
  data["green grass"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/yarrow.ob";
  data["yarrow"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/comfrey.ob";
  data["comfrey"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/plants/ivy_seed.ob";
  data["ivy seeds"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/stinking_mayweed.ob";
  data["stinking mayweed"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/klatchian_fleabane.ob";
  data["Klatchian fleabane"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(3) + 3 :);
  item->ob = "/obj/plants/wild_garlic.ob";
  data["wild garlic"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+3 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/golden_disagreeable.food";
  data["Golden Disagreeable apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+2 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/blackheart_apple.food";
  data["Lancre Blackheart apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/green_billet.food";
  data["Green Billet apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/peachface_apple.food";
  data["Blackglass Peachface apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = (: random(1)+1 :);
  item->ob = "/d/ram/Lancre_Kingdom/Blackglass/apples/gammer_smith.food";
  data["Gammer Smith apple"] = item;
  item = new( class item_data );
  item->season = ({ "spring", "summer", "autumn", "winter" });
  item->quant = 1;
  item->ob = "/obj/food/cabbage.food";
  data["cabbage"] = item;
  return data;
}
