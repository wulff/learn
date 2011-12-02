CKEDITOR.plugins.add( 'geshi', {
  requires : [ 'styles', 'button' ],

  init : function(editor) {
    // All buttons use the same code to register. So, to avoid
    // duplications, let's use this tool function.
    var addButtonCommand = function(buttonName, buttonLabel, commandName, styleDefiniton) {
      var style = new CKEDITOR.style(styleDefiniton);

      editor.attachStyleStateChange(style, function(state) {
        editor.getCommand(commandName).setState(state);
      });

      editor.addCommand(commandName, new CKEDITOR.styleCommand(style));

      editor.ui.addButton(buttonName, {
        label : buttonLabel,
        command : commandName
      });
    };

    var config = editor.config;

    addButtonCommand( 'Geshi-code', 'code', 'Geshi-code', config.coreStyles_code);
    addButtonCommand( 'Geshi-php',  'php',  'Geshi-php',  config.coreStyles_php);
    addButtonCommand( 'Geshi-ruby', 'ruby', 'Geshi-ruby', config.coreStyles_ruby);
    addButtonCommand( 'Geshi-mysql', 'mysql', 'Geshi-mysql', config.coreStyles_mysql);
    addButtonCommand( 'Geshi-html', 'html', 'Geshi-html', config.coreStyles_html);
    addButtonCommand( 'Geshi-css',  'css',  'Geshi-css',  config.coreStyles_css);
    addButtonCommand( 'Geshi-apache',  'apache',  'Geshi-apache',  config.coreStyles_css);
    addButtonCommand( 'Geshi-ini',  'ini',  'Geshi-ini',  config.coreStyles_css);
    addButtonCommand( 'Geshi-robots',  'robots',  'Geshi-robots',  config.coreStyles_css);
  }
});

// Basic Inline Styles.
CKEDITOR.config.coreStyles_code = {element : 'pre'};
CKEDITOR.config.coreStyles_php  = {element : 'pre', attributes : { 'language' : 'php'}};
CKEDITOR.config.coreStyles_ruby = {element : 'pre', attributes : { 'language' : 'ruby'}};
CKEDITOR.config.coreStyles_mysql = {element : 'pre', attributes : { 'language' : 'mysql'}};
CKEDITOR.config.coreStyles_html = {element : 'pre', attributes : { 'language' : 'html5'}};
CKEDITOR.config.coreStyles_css  = {element : 'pre', attributes : { 'language' : 'css'}};
CKEDITOR.config.coreStyles_apache  = {element : 'pre', attributes : { 'language' : 'apache'}};
CKEDITOR.config.coreStyles_ini  = {element : 'pre', attributes : { 'language' : 'ini'}};
CKEDITOR.config.coreStyles_robots  = {element : 'pre', attributes : { 'language' : 'robots'}};
