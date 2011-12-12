(function ($) {

Drupal.behaviors.learnFancyBox = {
  attach: function (context, settings) {
    $('body').bind('responsivelayout', function(event, layouts) {
      $('p.screenshot').remove();

      if (layouts.to != 'mobile') {
        $('a.fancybox').fancybox({
          'padding'      : 0,
          'transitionIn' : 'none',
          'transitionOut': 'none'
        });

        $('a.fancybox').each(function () {
          $(this).parent().addClass('fancybox').after('<p class="screenshot"><a href="' + $(this).attr('href') + '">Screenshot</a></p>');
        });
      }
      else {
        $('a.fancybox').each(function () {
          $(this).parent().removeClass('fancybox');
          $(this).unbind('click');
        });
      }
    });
  }
};

})(jQuery);
