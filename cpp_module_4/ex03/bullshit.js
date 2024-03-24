const defaultContainer = document.getElementById('default');
const containers = ['first-container', 'second-container', 'third-container', 'fourth-container'];
const backgrounds = ['bg-img-1', 'bg-img-2', 'bg-img-3', 'bg-img-4'];

function resetContainerClassNames() {
    for(let i = 0; i < 4; i++) {
      document.getElementById(containers[i]).className = "";
  	}
  }
  
  function updateBackgroundDesign(image) {
    defaultContainer.className = "";
    defaultContainer.classList.add(image);
  }
  
  function updateContainerDesign(container) {
    resetContainerClassNames();
    container.classList.add('hovered');
  }

document.addEventListener('DOMContentLoaded', function() {
   for (let i = 0; i < 4; i++) {
      containers[i].addEventListener('mouseenter', function() {
        updateBackgroundDesign(backgrounds[i]);
    	updateContainerDesign(document.getElementById(containers[i]));
   	   });
   }
});