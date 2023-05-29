import React, { useState } from "react";
import "./Header.css";
import { BiMenuAltRight } from "react-icons/bi";
import OutsideClickHandler from "react-outside-click-handler";

const Header = () => {
  const [menuState, setMenuState] = useState(false);
  const changeMenuDisplay = (menuState) => {
    if (document.documentElement.clientWidth <= 768) {
      if (menuState == true) {
        // document.querySelector(".h-menu").style.visibility = "hidden";
        document.querySelector(".h-menu").style.top = "-400%";
      } else if (menuState == false) {
        // document.querySelector(".h-menu").style.visibility = "visible";
        document.querySelector(".h-menu").style.top = "4rem";
      }
    }
    setMenuState(!menuState);
  };

  return (
    <OutsideClickHandler onOutsideClick={()=>changeMenuDisplay(true)}>
      <section className="h-wraper">
        <div className="flexCenter paddings innerWidth h-container">
          <img src="./logo.png" alt="logo" width={100} />
          <div className="flexCenter h-menu">
            <a href="">Residencies</a>
            <a href="">Out Value</a>
            <a href="">Get Started</a>
            <button className="button">
              <a href="">Contact</a>
            </button>
          </div>
          <div className="menu-icon" onClick={()=>changeMenuDisplay(menuState)}>
            <BiMenuAltRight className="menu-icon" size={40} />
          </div>
        </div>
      </section>
    </OutsideClickHandler>
  );
};

export default Header;
