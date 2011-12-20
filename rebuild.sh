#!/bin/bash

# rebuild.sh - update contrib modules, themes, and libraries

makefile=`find . -name learn.make`

if [[ -z $makefile || ! -f $makefile ]]
then
  echo "No makefile found. Please make sure you are in a profile directory with a valid makefile.";
else
  find . -name .DS_Store -print0 | xargs -0 rm

  # nuke existing modules, themes, and libraries
  for directory in ./libraries ./modules/contrib ./modules/developer ./themes/contrib ./themes/custom/learn/fonts ./themes/custom/learn/libraries
  do
    if [ -d $directory ]
    then
      rm -Rf $directory
    fi
  done

  # add "--download-mechanism='drush_make'" if curl is not available on your system
  echo "Updating contrib modules and themes..."
  drush -y make --working-copy --no-core --contrib-destination=. $makefile
fi

makefile=`find . -name puppet.make`
if [[ -z $makefile || ! -f $makefile ]]
then
  echo "Unable to locate puppet makefile.";
else
  echo "Adding puppet geshi filter..."
  drush -y make --working-copy --no-core --contrib-destination=. $makefile
fi
