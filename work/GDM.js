
var Display = function() {
    this.company = "";
};
 
Display.prototype = {
    setStrategy: function(company) {
        this.company = company;
    },
 
    execute: function(question, answer) {
        return this.company.execute(question, answer);
    }
};
 
var Speaking = function() {
    this.execute = function(question, answer) {
		window.location.href = "../draganddrop/drag_drop3.html"
    }
};
 
var Writing = function() {
    this.execute = function(question, answer) {
        // calculations...
//        return "$39.40";
    }
};
 
var Reading = function() {
    this.execute = function(question, answer) {
        // calculations...
//        return "$43.20";
    }
};

var Listening = function() {
    this.execute = function(question, answer) {
        // calculations...
//        return "$43.20";
    }
};
 
 
// log helper
 
var log = (function() {
    var log = "";
 
    return {
        add: function(msg) { log += msg + "\n"; },
        show: function() { alert(log); log = ""; }
    }
})();
 
function run() {
    var question = { from: "76712", to: "10012", weigth: "lkg" };
    var answer = { from: "76712", to: "10012", weigth: "lkg" };
 
    // the 4 strategies
 
    var speaking = new Speaking();
    var writing = new Writing();
    var reading = new Reading();
    var listening = new Listening();
    
 
    var display = new Display();
 
    // 問題と答えの読み込み
    
    // フォルダ名に合わせたストラテジーを選択する
    display.setStrategy(speaking);
	
	// 表示実行
	display.execute(question, answer);
	
//    display.setStrategy(speaking);
//    log.add("Speaking Strategy: " + display.execute(question, answer));
//    display.setStrategy(writing);
//    log.add("Writing Strategy: " + display.execute(question, answer));
//    display.setStrategy(reading);
//    log.add("Reading Strategy: " + display.execute(question, answer));
//    display.setStrategy(listening);
//    log.add("Listening Strategy: " + display.execute(question, answer));
 
//    log.show();
}
