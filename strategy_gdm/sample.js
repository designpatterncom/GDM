
var Marking = function() {
    this.problem = "";
};

Marking.prototype = {
    setStrategy: function(problem) {
        this.problem = problem;
    },
 
    mark: function(problem_num) {
        this.problem.mark(problem_num);
    }
};

var Writing = function() {
    this.mark = function(problem_num) {
        // mark...
	//�{���Ȃ�Aproblem_num����P�ꐔ�Ɛ�����ǂݍ���Ŕ���
	var text1=document.form1.input1.value;
	var text2=document.form1.input2.value;
	var text3=document.form1.input3.value;
        if(text1=="will" && text2=="take" && text3=="off"){
	    alert("OK!");
	} else {
	    alert("NG!");
	};
    }
};
 
var Listening = function() {
    this.mark = function(problem_num) {
        // mark...
	//�{���Ȃ�Aproblem_num����Đ��t�@�C������ǂݍ���
        var audio=new Audio();
	audio.src="notify.wav";
	audio.play();
    }
};
 
var Reading = function() {
    this.mark = function(problem_num) {
        // mark...
        //��Ɠ����v�̂ŁB
	return;
    }
};
 
function run() {
    var problem_type=document.form1.problem_type.value;
    var problem_num=document.form1.problem_num.value;
 
    // the 3 strategies
 
    switch(problem_type){
	case "1":
	var problem = new Writing();
	break;
	case "2":
	var problem = new Listening();
	break;
	case "3":
	var problem = new Reading();
	break;
	default:
	//�G���[����
	var problem = null;
    }
 
    var marking = new Marking();
 
    marking.setStrategy(problem);
    if(problem!=null) marking.mark(problem_num);


    document.close();
    document.write("<!DOCTYPE html><html><head><meta charset='sjis'><title>�T���v��</title></head><body><form name='form1'><input type='hidden' name='problem_type' value='2'><input type='hidden' name='problem_num' value='1'><input type='button' value='�Đ�' onclick='run()'><script src='sample.js'></script></body></html>");

    //location.href="URL";
    //location.href="file:///C:/Users/C22168/Desktop/strategy_gdm/sound.html";
}
