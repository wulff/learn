(function ($) {

Drupal.behaviors.learnFancyBox = {
  attach: function (context, settings) {
    $('body').bind('responsivelayout', function(event, layouts) {
      if (layouts.to != 'mobile') {
        $('a.fancybox', context).fancybox({
          'padding'      : 0,
          'transitionIn' : 'none',
          'transitionOut': 'none',
          'overlayShow'  : false
        });
      }
    });
  }
};

})(jQuery);
