Creates a new Entity, loads data for it from YML and makes it available for Views.

I didn't use symfony/yaml here with Composer
since it's a simple module that doesn't need hard logic.
I used only https://github.com/mustangostang/spyc/blob/master/Spyc.php

And also here aren't any code to prevent hacker attacs.

You can test it easier. Just enable feature feature_for_view_test_8_for_drupal_7
and it will enable all the dependencies including this module.
After the content will be created you can go to the page: /test8
There should be 3 tested entities.