var ctx;
var canvas = document.getElementById('myCanvas');
$(document).ready(function(){
	// xively shit starts here.
	xively.setKey( "7mwhzeLKvubmGwT49aJH7Aztn6tbGETGnHraIcrooYP2qkVc" );
	/*xively.feed.get( "504", function( data ) {  
	  console.log( data.title );// Logs the feed title  
	});

	xively.datastream.subscribe( "61916", "sine60", function( event, data ) {  
	  console.log( data.current_value ); // Logs value changes in realtime  
	});   
	*/ 
	var feedID        = '544049360';          // Feed ID  
	  datastreamID  = "sensor_reading1";       // Datastream ID  
	  selector      = "#test";   // Your element on the page  
	// Get datastream data from Xively  
	xively.datastream.get (feedID, datastreamID, function ( datastream ) {  
		// WARNING: This code is only executed when we get a response back from Xively,   
		// it will likely execute after the rest your script  
		// NOTE: The variable "datastream" will contain all the Datastream information   
		// as an object. The structure of Datastream objects can be found at:   
		// https://xively.com/dev/docs/api/quick_reference/api_resource_attributes/#datastream  

		// Display the current value from the datastream  
		// This function runs the first time we get data from xively.  
		// Below, we subscribe for updates.
		$(selector).html( datastream["current_value"] );  
		draw();
		redraw(datastream["current_value"]);
		// Getting realtime!   
		// The function associated with the subscribe method will be executed   
		// every time there is an update to the datastream  
		xively.datastream.subscribe( feedID, datastreamID, function ( event , datastream_updated ) {  
			// This function runs any time updated data is received from xively.
		  // Display the current value from the updated datastream  
		  $(selector).html( datastream_updated["current_value"] );  
		  redraw(datastream_updated["current_value"]);
		});  
	});
	// WARNING: Code here will continue executing while we get the datastream data from Xively,   
	// use the function associated with datastream.get to work with the data   
	// once the request is complete
	
});
function draw(){
		if(canvas.getContext){
			ctx = canvas.getContext('2d');
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
			
		};
	};

	function redraw(theValue){
		console.log(theValue);
		if (theValue == 1.00){
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
		}else{
			ctx.beginPath(); 
			ctx.lineWidth="5";
			ctx.strokeStyle="red";
			ctx.moveTo(150,400);
			ctx.lineTo(150,200);
			ctx.stroke();	
			ctx.beginPath(); 
			ctx.lineWidth="5";
			ctx.strokeStyle="green";
			ctx.moveTo(200,400);
			ctx.lineTo(380,310);
			ctx.stroke();	
		}
	}
	animdraw();
	function animdraw(){
		//create the mice and cats with a set random time for a cat to come out.
		ctx = canvas.getContext('2d');
		var img = new Image();
		img.src = "./img/mice.png";
		img.height=50;
		img.width=50;
		img.rotate=90;
		img.onload=function(){
			ctx.drawImage(img,140,500,40,100);
		};
	}
	function meace(x, y, fill) {
		// create ainstance of the mice and
		this.x = x || 0;
		this.y = y || 0;
	}
/////////////////////////
	
	//http://dgerena.github.io/advancedTopicsInWeb/capstone/index.html github link.

