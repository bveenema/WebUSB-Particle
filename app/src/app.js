'use strict'

let button = document.getElementById('connect');
let device;

button.addEventListener('click', () => {

  navigator.usb.requestDevice({ filters:[] }).then((d) => {
    console.log("Connected to device: ",d)
    d.open().then((test) => {
      console.log("Opened device: ", test);
      device = d;
    }).catch((err) =>   Console.log("Failed to Open! ", err));
  }).catch((err) => console.log("Failed to connect! ",err));
})
