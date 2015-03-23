function func()
{
    var text1=document.form1.input1.value;
    var text2=document.form1.input2.value;
    var text3=document.form1.input3.value;

    if(text1=="will" && text2=="take" && text3=="off"){
		window.location.href = "../index.html";
    } else {
	alert("NG!");
    }
}
