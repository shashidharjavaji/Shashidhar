// checking off Todo's
$("ul").on("click","li", function(){
	$(this).toggleClass("completed");
});

// deleting ToDos
$("ul").on("click","span", function(event){
	$(this).parent().fadeOut(500, function(){
		$(this).remove();
	});
	event.stopPropagation();
});


// entering a Todo
$("input[type = 'text']").keypress(function(event){
	if(event.which === 13){
		var data = $(this).val();
		$(this).val("");
		$("ul").append("<li><span><i class='fa fa-trash'></i></span>" + data + "</li>");

	}
});

$(".fa-plus").click(function(){
	$("input[type = 'text']").fadeToggle();
})