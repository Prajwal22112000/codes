/* eslint-disable no-unused-vars */
import React from "react";
import { useEffect, useState, useContext } from "react";
import {
  AiOutlineSearch,
  AiOutlineHeart,
  AiFillHeart,
  AiOutlineShopping,
  AiFillShopping,
  AiOutlineMenu,
} from "react-icons/ai";
import { Search } from "react-router-dom";
import Cart from "../Cart/Cart";
import { Context } from "../../utils/context";
import "./Header.scss";
import OutsideClickHandler from "react-outside-click-handler";

const Header = () => {
  const [pixel, setPixel] = useState(true);
  const [menuVisibility, setMenuVisibility] = useState(false);
  const [scroll, setScroll] = useState(window.scrollY);

  function onScrollFunction() {
    if (window.scrollY >= scroll) {
      setPixel(false);
    } else if (window.scrollY < scroll) {
      setPixel(true);
    }
    setScroll(window.scrollY);
  }

  function showMenu() {
      if (menuVisibility === false) {
        setMenuVisibility(true);
      }
      if (menuVisibility === true) {
        setMenuVisibility(false);
      }
  }

  useEffect(() => {
    window.addEventListener("scroll", onScrollFunction);
  });

  return (
    <header
      className={`fullWidth header-wrapper ${
        pixel ? "show-header" : "hide-header"
      }`}
    >
      <div className="flexCenter  header-content">
        <OutsideClickHandler onOutsideClick={()=>{if(window.innerWidth < 768 && menuVisibility === true){showMenu()}}}>
        <AiOutlineMenu className="menu-button" onClick={showMenu} size="25" />
          <div
            className={`flexStart header-left  ${
              menuVisibility ? "show-menu" : "hide-menu"
            }`}
          >
            <button>HOME</button>
            <button>ABOUT</button>
            <button>CATEGORIES</button>
          </div>
        </OutsideClickHandler>
        <div className="flexCenter header-center">
          <h1>NEGISTORE</h1>
        </div>
        <div className="flexEnd header-right">
          <AiOutlineSearch />
          <AiOutlineHeart />
          <div className="shooping-cart">
            <AiOutlineShopping />
            <span className="cart-item-count">0</span>
          </div>
        </div>
      </div>
    </header>
  );
};

export default Header;
