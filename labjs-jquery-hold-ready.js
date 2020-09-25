/**
 * @file
 * LabJS jQuery Hold Ready.
 *
 * Holds the jQuery document ready event until all scripts have loaded.
 *
 * This is not *technically* correct as the document is
 * in fact ready before the scripts have loaded. Unfortunately there is a lot
 * of code in core and contrib that assumes the two to be colloquial.
 *
 * To make things *just work* we can hold the jQuery ready event until all
 * scripts have loaded. This is done using jQuery's holdReady function
 *
 * @see https://api.jquery.com/jQuery.holdReady/
 */

(function ($) {
  $.holdReady(true);
  $(document).bind('scripts-ready', function () {
    $.holdReady(false);
  });
})(jQuery);
