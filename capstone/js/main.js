$(document).ready(function(){
	var canvas = document.getElementById('myCanvas');
	if (canvas.getContext){
		var ctx = canvas.getContext('2d');
		// drawing code here
		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(100,0);
		ctx.lineTo(100,600);
		ctx.stroke();
		
		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(500,0);
		ctx.lineTo(400,250);
		ctx.stroke();

		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(400,250);
		ctx.lineTo(200,350);
		ctx.stroke();

		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(200,350);
		ctx.lineTo(200,0);
		ctx.stroke();

		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(200,0);
		ctx.lineTo(500,0);
		ctx.stroke();

		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(400,350);
		ctx.lineTo(200,450);
		ctx.stroke();

		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(400,350);
		ctx.lineTo(600,0);
		ctx.stroke();

		ctx.beginPath(); 
		ctx.lineWidth="5";
		ctx.strokeStyle="green";
		ctx.moveTo(200,450);
		ctx.lineTo(200,600);
		ctx.stroke();

		// arrow
		
		if (false) {
			ctx.beginPath(); 
			ctx.lineWidth="5";
			ctx.strokeStyle="green";
			ctx.moveTo(150,400);
			ctx.lineTo(150,200);
			ctx.stroke();	
			
			

			ctx.beginPath(); 
			ctx.lineWidth="5";
			ctx.strokeStyle="red";
			ctx.moveTo(200,400);
			ctx.lineTo(380,310);
			ctx.stroke();	
			//if statement for the direction in the header.
						
		}else{
			ctx.beginPath(); 
			ctx.lineWidth="5";
			ctx.strokeStyle="red";
			ctx.moveTo(150,400);
			ctx.lineTo(150,200);
			ctx.stroke();	
			//if statement for the direction in the header.
			

			ctx.beginPath(); 
			ctx.lineWidth="5";
			ctx.strokeStyle="green";
			ctx.moveTo(200,400);
			ctx.lineTo(380,310);
			ctx.stroke();	
			//if statement for the direction in the header.
			
		}
	} else {
	  // canvas-unsupported code here
	}
	//http://dgerena.github.io/advancedTopicsInWeb/capstone/index.html github link.
});
