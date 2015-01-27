
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
	//本来なら、problem_numから単語数と正答を読み込んで判定
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
	//本来なら、problem_numから再生ファイル名を読み込む
        var audio=new Audio();
	audio.src="notify.wav";
	audio.play();
    }
};
 
var Reading = function() {
    this.mark = function(problem_num) {
        // mark...
        //上と同じ要領で。
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
	//エラー処理
	var problem = null;
    }
 
    var marking = new Marking();
 
    marking.setStrategy(problem);
    if(problem!=null) marking.mark(problem_num);
}
