CKEDITOR.plugins.add('geshi', {
  requires: ['styles', 'button'],

  init: function(editor) {
    // utility function for registering buttons
    var addButtonCommand = function(buttonName, buttonLabel, commandName, styleDefiniton) {
      var style = new CKEDITOR.style(styleDefiniton);

      editor.attachStyleStateChange(style, function(state) {
        editor.getCommand(commandName).setState(state);
      });

      editor.addCommand(commandName, new CKEDITOR.styleCommand(style));

      editor.ui.addButton(buttonName, {
        label: buttonLabel,
        command: commandName
      });
    };

    // add buttons for all active geshi filters
    for (var filter in Drupal.settings.learnGeshi) {
      addButtonCommand(filter, 'G:' + Drupal.settings.learnGeshi[filter].label, filter, Drupal.settings.learnGeshi[filter].settings);
    }
  }
});
