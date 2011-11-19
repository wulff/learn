(function ($) {

Drupal.behaviors.learnFancyBox = {
  attach: function (context, settings) {
    $('body').bind('responsivelayout', function(event, layouts) {
      if (layouts.to != 'mobile') {
        $('a.fancybox').fancybox({
          'padding'      : 0,
          'transitionIn' : 'none',
          'transitionOut': 'none',
          'overlayShow'  : false
        });

        $('a.fancybox').each(function () {
          $(this).parent().addClass('fancybox').after('<p><a href="' + $(this).attr('href') + '">Screenshot</a></p>');
        });
      }
    });
  }
};

})(jQuery);
